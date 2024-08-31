//To check palindrome of number
#include<stdio.h>
int main()
{
	int n,reversed=0,remainder,original;
	printf("Enter an integer:");
	scanf("%d",&n);
	original=n;
	
	//reversed integer is stored in reversed variable
	while(n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	
	//palindrom if original and reversed are equal
	if(original==reversed)
	printf("%d is a palindrom.",original);
	else
	printf("%d is not a palindrom.",original);
	return 0;
}
