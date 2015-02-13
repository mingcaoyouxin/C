#include<stdio.h>
#include<math.h>

int isprime( int x )
{
	for( int i = 2; i <= sqrt(x); i++ )
	{
		if( x % i == 0 )
		{
			return  -1;
		}
	}
	return 1;
}

int main( void )
{
	printf("1\n2\n");
	for( int i = 3; i <= 100; i++ )
	{
		if( isprime( i ) == 1 )
			printf("%d\n", i );
	}
	
	return 0;
}
