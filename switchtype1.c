#include <stdio.h>
int main (){
	char type;
	printf("Enter a character :\n");
	scanf(" %c", &type);
	if (type>='0' && type <='9'){
		printf("Erreur, Validi a chr not number !");
	}else {
		switch(type){
			case 'a' :
				    printf("%c Voyele .",type);
				    break;
			case 'u':
				    printf("%c Voyele .",type);
				    break;
			case 'i':
			        printf("%c Voyele .",type);
			        break;
			case 'e':
				    printf("%c Voyele .",type);
				    break;
			case '0':
				    printf("%c Voyele .",type);
				    break;
		    default:
		           printf("%c Consent .",type);
				    break;
		}
		
	}
	
	
	
	return 0;
}
