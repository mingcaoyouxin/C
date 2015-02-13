#include<stdio.h>
#include<string.h>
int main(void)
{
	printf( "please input oneline:\n" );
	char	line[20] ;
	char	*a = gets( line );
	printf( "%s\n", a );
	puts("print test:");
	printf("%d %s %f\n",10,"string",1.2);
	puts( "give a newline" );
	int quantity,price;
	scanf("%d %d",&quantity,&price);
	char department[20];
	scanf("%s",department);
	return 0;
}
