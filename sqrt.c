#include<stdio.h>

int main ( void )
{
	float num;
	printf( "please give the number to get its sqrt:" );
	scanf( "%f",&num );
	if( num < 0 )
	{
		printf("Cannot compute the square root of a negative number!\n");
		return -1;
	}
	float prev;
	float new = 1 ;
	do{
		prev = new;
		new = ( prev + num / prev ) / 2;
		printf("%.15e\n", new);
	} while( prev != new );
	printf("the sqrt of %g is %g\n",num,prev);
	return 0;
}
