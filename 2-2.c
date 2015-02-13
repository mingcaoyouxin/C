#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int ch;
	int len = 0;
	while( ( ch = getchar() ) != EOF  )
	{
		if( ch =='{' )
			len++;
		else if( ch == '}' )
		{
		/* 	如果此时len==0 说明此时都没有左花括号，因此肯定是错误的匹配 */
			if(len == 0)
				printf("Extra closing brace!\n");
			else
				len--;
		}
	}
	if(len == 0)
		printf ( "accept!\n" );
	else
		printf( "sorry!unmatched\n" );
	return EXIT_SUCCESS;
}
