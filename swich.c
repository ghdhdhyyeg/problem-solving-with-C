#include <stdio.h>
int main(){
	int jour;
	printf("entrer un nombre :\n");
	scanf("%d", &jour);
	if (jour <= 0 || jour > 7){
		printf("Erreur, Validi your day !");
	}else{
		switch(jour){
			case 1 :
				printf("lundi");
				break;
			case 2 :
			    printf("mardi");
			    break;
			case 3 :
			    printf("mecredi");
				break;	
			case 4 : 
			    printf("jeudi");
			    break;
			case 5 :
				printf("vendredi");
				break;
			case 6 :
				printf("samedi");
				break;
			case 7 :
				printf("dimanche");
				break;
	}}	
	return 0;
}
