#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef char * P_CHAR;
	char p[20]="hello world";
	char *string = "hello world";
	const char *p1c = p;
	const char *p1s = string;
	const P_CHAR p2c =p;
	const P_CHAR p2s = string;
	p1c++;
	p1s++;
	const int * ca;
	int * const pa;
	const int b;
	b=10;
	ca=&b;
	pa=&b;

	/* p2c++; */
	/* p2s++; */

	p2c[1]='c';
	/* p2s[1]='s'; */
	printf( "%s\n", p );
	/* printf("%s\n", string); */
	return EXIT_SUCCESS;
}
