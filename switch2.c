#include <stdio.h>
int main(){
	int month;
	printf("Enter a number of month :\n");
	scanf("%d",&month);
	if (month <= 0 || month > 12){
		printf("Erreur, Validi your number !\n");
	}else{
		switch(month){
		
		    case 1 : 
		            printf("janvier");
		            break;
		    case 2 :
		    	   printf("fevrier");
		    	   break;
		    case 3 :
		    	   printf("Mars");
		    	   break;
		    case 4 :
		    	   printf("Avril");
		    	   break;
		    case 5 :
		    	   printf("Mai");
		    	   break;
		    case 6 :
		    	   printf("Juin");
		    	   break;
		    case 7 :
		        	printf("juillet");
		    case 8 :
		    	    printf("Aout");
		    	    break;
		    case 9 :
		    	    printf("September");
		    	    break;
		    case 10 :
		    	    printf("October");
		    	    break;
		    case 11 :
		    	    printf("November");
		    	    break;
		    case 12 :
		             printf("December");
      	             break;	
      	         }
	}
	
	
	
	
	
	
	return 0;
}
