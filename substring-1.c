#include<stdio.h>

int substr( char dst[], char src[], int start, int length )
{
	int start_index,dst_index;
	dst_index = 0;
	if( start >= 0 && length >= 0)
	{
		/* 将源数组的下标移动到start位置，如果遇到NUL字符则停止 */
		for( start_index = 0; start_index < start && src[start_index] != 0; start_index++ )
			;
		/* 复制length个字符，当遇到NUL字符时停止复制 */
		while( length > 0 && src[start_index] != 0 )
		{
			dst[dst_index] = src[start_index];
			dst_index++;
			start_index++;
			length--;
		}
	}
	dst[dst_index] = 0;
	return dst_index;
}

int main( void )
{
	char src[128] = "01234567";
	char dst[128];
	printf( "the src string is:%s\nthe dst string is:%s\nthe length string is:%d\n", src, dst, substr( dst, src, 2, 5) );
	return 0;
}
