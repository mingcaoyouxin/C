#include<stdio.h>

int main ( void )
{
	float num;
	float prev = 1;
	scanf( "%f",&num );
	float now = ( prev + num / prev ) / 2;
	while(prev != now )
	{
		prev = now ;
		now =( prev + num / prev ) / 2; 
		printf( "%f\n",now );
	}
	return 0;
}
