#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	enum weekday { MON=1, TUE, WED, THU, FRI, SAT ,SUN };
	enum weekday yesterday,today,tomorrow;
	int test;
	yesterday=MON;
	today=TUE;
	tomorrow=30;
	test=tomorrow;
	printf("%d %d %d %d\n",yesterday,today,tomorrow,test);
	return EXIT_SUCCESS;
}
