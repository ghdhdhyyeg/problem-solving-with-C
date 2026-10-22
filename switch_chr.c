#include <stdio.h>
int main(){
	int mark;
	        printf("Enter your mark (A . B . C . D) : \n");
	        scanf(" %c",&mark);
	        switch(mark){
	        	
	        	case 'A' : case 'a' :
	        	        printf(" %c is Exellent !",mark);
	        	        break;
	        	case 'B' : case 'b' :
	        		    printf("%c is Very Good ! ",mark);
	        		    break;
	            case 'C' : case 'c' :
	            	    printf("%c is Good !",mark);
	            	    break;
	            case 'D' : case'd' :
	            	    printf("%c is Passable !!",mark);
	            	    break;
	            default :
	            	    printf("%c is you Failed !!! ",mark);
	        	        break;
			}
	return 0;
}
