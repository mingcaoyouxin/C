/* 去除多余空格 */
#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

/* 判断是否遇到空格 */
int iswhite( char ch )
{
	return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch== '\n' || ch == '\r';
}

void deblank( char *string )
{
	char *src, *dst, ch;
	/* 初始src和dst指针都指向第一个字符 */
	src = string;
	dst = string++;//string指向第二个字符

	/* 如果遇到NUL字符则停止循环 */
	while( (ch = *src++ ) != '\0' )
	{
		/* 如果遇到空格 */
		if( iswhite( ch ) )
		{
			/* 如果第一个字符便是空格，存储 */
			/* 如果前一个也是空格，则丢弃，否则存储 */
			if( src == string || dst[-1] != ' ' )
			{
				*dst++ = ' ';
			}
		}
		/* 如果不是空格则存储 */
		else
		{
			*dst++ = ch;
		}
	}
	/* 最后加上NUL字符 */
	*dst = '\0';
}

int main( void )
{
	char input[128];
	while( gets( input ) != NULL )
	{
		deblank( input );
		printf("the string after delete blans is:%s\n", input);
	}
	return 0;
}
