#include<stdio.h>
int getUnits(int digit)
{
	return digit%10;
}

int getTens(int digit)
{
	return (digit/10)%10;
}
int main(void)
{
	printf("the units of 9 is: %d\n",getUnits(9));
	printf("the units of 10 is: %d\n",getUnits(10));
	printf("the units of 102 is: %d\n",getUnits(102));
	printf("the tens of 9 is: %d\n",getTens(9));
	printf("the tens of 10 is: %d\n",getTens(10));
	printf("the tens of 102 is: %d\n",getTens(102));
	return 0;
}
