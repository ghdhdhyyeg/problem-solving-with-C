#include <stdio.h>
int main (){
	int a,b;
	char operation;
	printf("Enter a number : a = ");
	scanf("%d", &a);
	printf("Enter a number : b = ");
	scanf("%d", &b);
	printf("Enter the type of Operation ( - / + * % ) : ");
	scanf(" %c", &operation);
	switch(operation){
		
		case '+' :
			    printf("%d + %d = %d",a,b, a+b);
			    break;
	   case '-' :
	   	        printf("%d - %d = %d and %d - %d = %d",a,b, a-b , b,a, b-a);
	   	        break;
	   case '*' :
	   	        printf("%d * %d = %d",a,b, a*b);
	   	        break;
	    case '/' :
	    	    printf("%d / %d = %d",a,b, a/b);
	    	    break;
	   case '%' :
	   	        printf("%d % %d = %d",a ,b , a%b);
		        break;
		default :
			    printf("Validi your Operation !");
			    break;

}
	return 0;
}
