#include <stdio.h>
int main(){
	int note;
	printf("Entrer votre note :\n");
	scanf("%d",&note);
	if (note < 0 || note > 100){
		printf("Erreur, validi votr note !\n");
	}else {
		switch(note/10){
			case 10 :
				   printf("A");
				   break;
		   case  9 :
		   	       printf("A");
		           break;
		    case 8 :
		    	    printf("B");
		    	    break;
		    case 7 :
		    	    printf("C");
		    	    break;
		    case 6 :
		    	printf("D");
		    	break;
		    default :
		    	printf("F");
		    	break;
		    
		    	
		    
		}
	}
	    
	
	
	
	
	
	return 0;
}
