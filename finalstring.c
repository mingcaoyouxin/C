#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *s = "hello world";
	s[0] = 'H';
	printf("%s\n", s);

	return EXIT_SUCCESS;

}
