#include<stdio.h>
#include<stdlib.h>
#define MAX_INPUT 1000 /*每个输入行的最大长度*/

int main(void)
{
	char input[ MAX_INPUT ];
	int len;
	char longest[ MAX_INPUT ];
	int longest_len;
	
	longest_len=-1;
	while(gets(input) != NULL)
	{
		len=strlen( input );
		if(len > longest_len)
		{
			strcpy(longest, input);
			longest_len = len;
		}
	}
	
	if(longest_len >= 0)
		puts(longest);
	return EXIT_SUCCESS;
}
