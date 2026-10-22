#include <stdio.h>
int main(){
	char input;
    int c,b,l,L,r,h;
    
    printf("Enter the type of Surface, first character : ");
    scanf(" %c", &input);
    
    
    
    switch(input){
    	case 'C' : case 'c' :
    	
    		printf("Please Enter the value of the cote =  ");
    		scanf("%d", &c);
    		printf("The Surface of Caree is %d * %d = %d .",c,c, c*c);
    		break;
    	
    		
    	case 'R' : case 'r' :
			
    		printf("Please Enter the value of the largeur =   ");
    		scanf(" %d", &l);
    		printf("And Langeur =  ");
    		scanf("%d", &L);
    		printf("The Surface of Rectangle is %d * %d = %d .",l,L, l*L);
    		break;
    	
    	case 'T' : case 't' :
    		
    		printf("Please Enter the base =  ");
    		scanf("%d", &b);
    		printf("And the hauteur =  ");
    		scanf("%d", &h);
    		printf("                 The Surface of Triangle is ( %d * %d ) / 2 = %d .",b,h, ( b*h )/2  );
            break;
        
		case 'O' : case 'o' :
		
			printf("Please Enter the rayon : ");
			scanf("%d", &r,"\n");
		    printf("                  The Surface of Cercle is pi * %d * %d = %d .",r,r, 3.14*r*r);
			break;
			
    	default :
    		printf("                   Erreur, validi your surface !");
    		break;
    	
	}
    
	
	return 0;
}
