#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char ch;
		 
	if ((fp = fopen("eof_test.txt", "rb")) == NULL){	      
		perror("eof_test.txt");		      
		return 0;				    
	}

	char buffer[33];
			  
	while((ch = fgetc(fp)) != EOF){
		//printf("%0x \t",ch); 
		//itoa(ch, buffer, 16); 
		sprintf(buffer, "%#x ", ch);			 
		printf("%s", buffer);	             
	}
		printf("\n");	
		fclose(fp);	
		return 0;
}													
