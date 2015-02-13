#include<stdio.h>
extern int  a;
void printlinka();
void printlinkb();
int main ( void )
{
	a=20;
	printlinka();
	printlinkb();
	return 0;
}
