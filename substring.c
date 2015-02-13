#include<stdio.h>
#include<string.h>

int substr( char dst[], char src[], int start, int len )
{	
	int src_length = strlen( src );
	int dst_index = 0;
	printf( "the length of the src string is:%d\n", strlen( src ) );
	if( start >= src_length || start < 0 || len < 0 )
	{
		dst[0] = '\0';
	}
	else
	{
		for( dst_index = 0; dst_index < len; dst_index++ )
		{
			if( dst_index + start < src_length )
				dst[dst_index] = src[dst_index+start];
			else
			{
				dst[dst_index] = '\0';
				break;
			}
		}
		dst[dst_index]='\0';
	}
	return dst_index;
}
int main( void )
{
	char src[128]="01234567";
	char dst[128];
	printf( "src string:%s\ndst string:%s\nthe length of dst string is:%d\n", src, dst, substr( dst, src, -2, 5) );
	return 0;
}
