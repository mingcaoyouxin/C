#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	int c;
		 
	if ((fp = fopen("eof_test.txt", "rb")) == NULL){	      
		perror("eof_test.txt");		      
		return 0;				    
	}

	char buffer[33];
			  
	while((c = fgetc(fp)) != EOF){
		//printf("%0x \t",c); 
		//itoa(c, buffer, 16); 
		sprintf(buffer, "%#x ", c);			 
		printf("%s", buffer);	             
	}
			
	printf("\n");	
	fclose(fp);	
		
	return 0;
}
