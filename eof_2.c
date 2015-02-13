#include <stdio.h>

int main(void)
{

	FILE *fp;

	unsigned char c;


	if ((fp = fopen("eof_test.txt", "rb")) == NULL)
	{

		perror ("eof_test.txt");

		return 0;

	}


	while ((c = fgetc(fp)) != EOF)
	{

		putchar (c);

	}


	fclose(fp);

	return 0;

}
