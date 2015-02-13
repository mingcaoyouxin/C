#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define MAX_LENGTH 129
int main( void )
{
	char prev_input[MAX_LENGTH];
	char new_input[MAX_LENGTH];
	int temp = FALSE;
	if( gets( prev_input ) != NULL )
	{
		while( gets( new_input ) != NULL )
		{
			/* 如果两个字符串相等，则返回0，如果str1>str2 则返回正数，反之返回负数 */
			if( strcmp( prev_input, new_input ) != 0 )
			{
				temp = FALSE;
				/* 参数1，目标字符串，参数2，源字符串 */
				strcpy( prev_input, new_input );
			}
			else if( !temp )
			{	
				temp = TRUE;
				printf( "new line is:%s\n", new_input );
			}
		}
	}
	return 0;
}
