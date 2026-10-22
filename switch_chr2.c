#include <stdio.h>
int main(){
	char input;
	        printf("Enter a character from (A) to (Z) :\n");
	        scanf(" %c", &input);
	        switch(input){
	        	
	        	case 'A' : case 'a' : case 'O' : case 'o' : case 'I' : case 'i' : case 'E' : case 'e' : case 'U' : case 'u' :
				
				printf("%c is a Voyelle .",input);
				break;
				
				default :
				 
				 printf("%c is a Consonne .",input); 
	             break;
	       }
	
	return 0;
}
