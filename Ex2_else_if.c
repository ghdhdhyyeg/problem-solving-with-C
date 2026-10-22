#include <stdio.h>
int main (){
	int mark;
	printf("Enter your mark :\n");
	scanf("%d" ,&mark);
	if ( mark < 0 || mark > 20){
		printf("Erreur, validi your mark .");
	}else if ( mark > 16 ){
        printf(" Tre bien !");		
	}else if ( mark > 14 ){
		printf(" Assez Bien .");
	}else if ( mark > 12){
		printf(" Bien .");
	}else if (mark > 10 ){
		printf(" Passable !");
	}else {
		printf("Ajourne !");
	}
	return 0;
}
