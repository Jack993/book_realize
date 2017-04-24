#include<stdio.h>
#include"read_data.h"

int	read_chardata( char *data, int n )
{	
	FILE	*fp = NULL;
	int	ch;
	int	i = 0;

	if( ( fp = fopen("/home/jack/code/book_realize/commondata/chardata", "r") ) == NULL ){
		printf( "fail to open the intdatafile!\n" );
		return 0;
	}

	while( (ch = fgetc(fp)) != EOF && (--n) > 0 ){
		data[i] = ch;
		i++;
	}

	data[i] = EOF;
	return i-1;
}

