#include<stdio.h>
int is_leap_year(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
		return 1;
	else
		return 0;
}
int main(void)
{
	printf("2000 is leap year? %s\n",is_leap_year(2000)?"True":"False");
}
