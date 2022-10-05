#include<stdio.h>
int main() 
{
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	if((i & 1)==1) 
	   printf("%d is odd",i);
	if((i & 1)==0) 
	   printf("%d is even",i);
}
