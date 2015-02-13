#include <stdio.h>

int main(void){
	int i = -1;
	signed char sc = 0xff;//表示-1
	unsigned char usc = 0xff;//表示255

	printf("转成16进制后i是 %x, sc是 %x\n",i,sc);
	if (i == sc){
		puts("i == sc");
	}else{
		puts("i != sc");
	}
	putchar('\n');
	printf("转成16进制后i是 %x, usc是 %x\n", i, usc);
	
	if (i == usc){
		puts("i == usc");
	}else{
		puts("i != usc"); 
	}
	
	return 0;
}
