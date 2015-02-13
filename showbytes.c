/* 打印不同程序对象的字节表示 */
#include<stdio.h>
#include<string.h>

typedef unsigned char *byte_pointer;

/* 显示字节，参数1，字节指针指向一个字节序列，参数2：字节序列的个数 */
void show_bytes( byte_pointer start, int len ){
	int i;
	for( i = 0; i < len; i++ )
	{
		printf( "%.2x", start[i] );
	}
	printf( "\n" );
}

/* 显示整型值的字节 */
void show_int( int x ){
	show_bytes( ( byte_pointer) &x, sizeof( int ) );
}

/* 显示浮点数的字节 */
void show_float( float x ){
	show_bytes( ( byte_pointer ) &x, sizeof( float ) );
}

/* 显示指针类型的字节 */
void show_pointer( void *x ){
	show_bytes( ( byte_pointer ) &x, sizeof( void * ) );
}

/* 测试函数 */
void test_show_bytes( int val )
{
	int ival = val;
	float fval = (float)val;
	int *pval = &val;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);

}

/* 小端法测试函数 */
void simple_show() {
	/* $begin simple-show-a */
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;
	show_bytes(valp, 1); /* A. */
	show_bytes(valp, 2); /* B. */
	show_bytes(valp, 3); /* C. */
	/* $end simple-show-a */
}

/* 浮点数测试函数 */
void float_eg() {
	int x = 3490593;
	float f = ( float ) x;
	printf( "For x = %d\n", x );
	show_int( x );
	show_float( f );

	x = 3510593;
	f = ( float ) x;
	printf( "For x = %d\n", x );
	show_int(x);
	show_float(f);
}

/* 字符串测试函数 */
void string_test()
{
	const char *s = "abcdef";
	char *num_str="12345";
	show_bytes( ( byte_pointer ) s, strlen( s ) );
	show_bytes( ( byte_pointer )num_str, 6 );
}

int main( void )
{
	test_show_bytes( 12345 );
	simple_show();
	float_eg();
	string_test();
	return 0;
}
