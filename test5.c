#include<stdio.h>
int getMaxInt(void)
{
	return (1<<31)-1;
}
int main(void)
{
	printf("The max int is:%d\n",getMaxInt());
	return 0;
}

