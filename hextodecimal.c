/* 将十六进制转为十进制 */
#include<stdio.h>

int main( void )
{
	int num;
	do{
		printf( "please give a hex number to change to decimal:" );
		scanf( "%d", &num );
		printf( "%d:0x%x\n", num, num );
	}while( num != EOF && num != '\n');

	return 0;
}
