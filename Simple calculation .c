#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char operator;
	float num1, num2,result=0.0;
	printf("simulation of a simple calculator\n");
	
	printf("Enter the operator[+,-,*,/]\n");
	operator=getchar();
	
	printf("Enter two numbers\n");
	scanf("%f %f",&num1,&num2);
	
	switch(operator)
    {
    	case'+':
    		result=num1+num2;
    		break;
    	case'-':
			result=num1-num2;
			break;
		case'*':
		    result=num1*num2;
		    break;
		case'/':
		    result=num1/num2;
		    break;
		 default:
		 printf("Error in operation\n");
		 exit(0) ;  
			
	 } 
	 
	 printf("\n %.2f %c %.2f=%.2f\n",num1,operator,num2,result);
	 return 0;

}
