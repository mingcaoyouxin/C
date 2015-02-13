#include<stdio.h>
#include<string.h>

/* 从源字符串复制n个字符到目标字符串 */
void copy_n( char dst[], char src[], int n )
{
	/* 计算源字符串的长度，不包括NUL字符'\0' */
	/* int length = strlen( src ); */
	/* if( length < n ) */
	/* { */
	/* 	for( int i = 0; i < length; i++ ) */
	/* 	{ */
	/* 		dst[i] = src[i]; */
	/* 	} */
	/* 	for(int i = length; i < n; i++) */
	/* 	{ */
	/* 		dst[i] = '\0'; */
	/* 	} */
	/* } */
	/* else */
	/* { */
	/* 	for(int i = 0; i < n; i++ ) */
	/* 	{ */
	/* 		dst[i] = src[i]; */
	/* 	} */
	/* } */
	int src_index = 0, dst_index;
	for( dst_index = 0; dst_index < n; dst_index++ )
	{
		dst[dst_index] =  src[src_index];
		/* 0与'\0'均为二进制全0，没有区别，均为NULL character */
		if( src[src_index] != 0 )
			src_index++;

	}
}

int main( void )
{
	char src[] = "ddd";
	char dst[5];
	copy_n(dst,src,5);
	printf( "src:%s\ndst:%s\n", src, dst );
	return 0;
}
