#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char input[20]; //hna kn9ra ah drl howa lwl ila harf nkharjo 
	
	printf("Enter a number :\n");
	scanf("%s", input);
	int i = 0; // hna kt9ol wah kayn harf fi input 
	for  (; i < strlen(input); i++){
		 if(isalpha(input[i])){ // ila kan harf
		 	printf("Ereeur, enter number!");
		 	return 0; // hbss baenamej 
		 }  
	}
	// ila dazet lhimaya 3ad ndozo nhawlo ness lra9em daba 
	int a = atoi(input); // 3andek "123" ==> 123

	
	

	
	if (a == 0){
		printf("%d number neutrel .",a);
	}else if (a > 0){
		printf("%d number positive .",a);
	}else {
		printf("%d number negative .",a);
	}
	
	
	
	
	return 0;
}
