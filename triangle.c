#include<stdio.h>

/* 判断是否为一个三角形 */
void is_triangle( int a, int b, int c )
{
	/* int temp_array[3]; */
	/* temp_array[0] = a; */
	/* temp_array[1] = b; */
	/* temp_array[2] = c; */
	/* for( int i = 0; i < 3 ; i++ ) */
	/* { */
	/* 	for( int j = i+1; j < 3; j++ ) */
	/* 	{ */
	/* 		if( temp_array[i] > temp_array[j] ) */
	/* 		{ */ 
	/* 			int temp = temp_array[i]; */
	/* 			temp_array[i] = temp_array[j]; */
	/* 			temp_array[j] = temp; */
	/* 		} */
	/* 	} */
	/* } */
	/* /1* for( int i = 0; i < 3; i++ ) *1/ */
	/* /1* { *1/ */
	/* /1* 	printf( "%d ", temp_array[i] ); *1/ */
	/* /1* } *1/ */
	/* /1* printf( "\n" ); *1/ */
	/* if( temp_array[0] + temp_array[1] > temp_array[2] ) */ 
	/* { */
	/* 	if(temp_array[0] == temp_array[1] && temp_array[1] == temp_array[2]) */
	/* 		printf("等边三角形"); */
	/* 	else if( temp_array[0] == temp_array[1] || temp_array[1] == temp_array[2] ) */
	/* 		printf( "等腰三角形" ); */
	/* 	else */
	/* 		printf( "普通三角形" ); */
	/* } */
	/* else */
	/* 	printf( "不是三角形" ); */
	/* printf( "\n" ); */
	int temp;
	if( a < b )
	{
		temp = a;
		a = b;
		b = temp;
	}
	if( a < c )
	{
		temp = a;
		a = c;
		c = temp;
	}
	if( b < c )
	{
		temp = b;
		b = c;
		c = temp;
	}
	
	if( c <= 0 || b + c <= a)
	{
		printf("Not a triangle\n" );
	}
	else if( a == c )
		printf( "Equilateral!\n" );
	else if( a == b || b == c )
		printf( "Isosceles!\n" );
	else
		printf( "Scalene!\n" );

}
int main( void )
{
	int a, b, c;
	printf( "please give three number of a triangle:\n" );
	scanf( "%d %d %d", &a, &b, &c );
	is_triangle( a, b, c );
	return 0;
}
