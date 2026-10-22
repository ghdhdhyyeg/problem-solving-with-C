#include <stdio.h>
int main(){
	float note;
	printf("+-----------------------------------+\n");
	printf("| Note = %.2f                       |\n", note );
	printf("| Mention = tres bien               |\n ");
	printf("+-----------------------------------+\n");
	
	printf("+-----------------------------------+\n");
    printf("donee votr note du bac :\n");
	scanf("%f",&note);
	if (note <= 0 || note > 20 ){
		printf("Erreur, votre note invalidi !\n");
	
	printf("+-----------------------------------+\n");
	else if (note >= 16 ){
		printf("Tre bien");
	}else if (note >= 14 ){
		printf("bien");
    }else if (note >= 12 ){
    	printf("asse bien");
	}else if (note >= 10 ){
		printf("Passable");
	}else if (note >= 7){
		printf("Rattrapage!");
	}else{
	    printf("Saquet");
    }
	return 0;
}

