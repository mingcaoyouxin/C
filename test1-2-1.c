#include<stdio.h>
#include<stdlib.h>

int main ( void )
{
	int newline = 1;
	int  ch;
	int line = 1;

	while(( ch = getchar()) != EOF )
	{	

		/* 如果是一个新的行就打印行号 */
		if(newline != 0)
		{
			printf("%d:",line);
			newline = 0;
		}

		/* 如果遇到一个换行符表明是一个新的行 */
		if( ch == '\n')
		{
			line++;
			newline = 1 ;
		}
		putchar( ch );
	}
	return EXIT_SUCCESS;
}

