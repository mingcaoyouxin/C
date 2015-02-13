#include<stdio.h>
int getLength(int x)
{
	int length=1;
	int interval=10;
	while(x/interval>0)
	{
		length++;
		interval*=10;
	}
	return length;
}
int getGewei(int x)
{
	int length=getLength(x);
	printf("%d\n",length);	
	int count=1;
	int i=0;
	for(i=1;i<length;i++)
	{
		count*=10;
	}
	return x%count;
}
int getShiwei(int x)
{
	x=x/10;
	return getGewei(x);
}
int main(void)
{
	printf("9的个位是%d.\n",getGewei(9));
	printf("10的个位是:%d\n",getGewei(10));	
	printf("101的个位是:%d\n",getGewei(101));
	printf("9的十位是:%d\n",getShiwei(9));
	printf("10的十位是:%d\n",getShiwei(10));
	printf("102的十位是:%d\n",getShiwei(102));
	return 0;
}
