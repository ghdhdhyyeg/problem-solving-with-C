#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
	char input[100];
	printf("Enter a character :\n");
	scanf("%s", input);
	
	if (strlen(input) != 1){
		printf("Erreur, enter une seule lettre !\n");
	}else {
		  char type = input[0];
		  if (isdigit(type)){
		  	  printf("Erreur, c'est un chiffre !'");
		  }else{
		  	   switch(type){
		  	   	case 'a': case 'A' : case 'u' : case 'U' : case 'O': case'e' : case'E' : case'i' : case'I' : case'o' :
		  	   		printf("%c Voyelle.",type);
		  	   		break;
		  	   	default:
		  	   		printf("%c Concent",type);
		  	   		break;
		  	   		
		  	   		
				 }
		  }
	}
	
	
	
	
	return 0;
}
