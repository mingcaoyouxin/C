/* 去除多余空格 */
#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

void deblank( char string[] )
{
	int src_index = 0,dst_index = 0;
	int blank = FALSE;
	char dst[128],new;
	/* 如果遇到NUL字符则截止 */
	while( string[src_index] != '\0' )
	{
		/* 取出一个字符 */
		new = string[src_index++];
		/* 如果不是空格，则直接复制 */
		if( new != ' ' )
		{
			dst[dst_index++] = new;
			/* 把标志遇到空格的标志符置为false */
			blank = FALSE;
		}
		/* 如果遇到空格符，而且是第一次遇到，则赋一个空格 */
		else if( !blank )
		{
			dst[dst_index++] = ' ';
			/* 把遇到空格标志符置为TRUE标识已经遇到空格，以后不再进行复制 */
			blank = TRUE;
		}
	}
	/* 将结束标志符置为NUL字符 */
	dst[dst_index]='\0';
	strcpy( string, dst);
}

int main( void )
{
	char input[128];
	while( gets(input) != NULL )
	{
		deblank( input );
		printf("the string after delete blans is:%s\n", input);
	}
	return 0;
}
