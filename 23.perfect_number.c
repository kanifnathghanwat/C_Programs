#include<stdio.h>
int main() 
{
	int no, rem, i, sum=0;
	printf("Enter a number: ");
	scanf("%d",&no);
	for(i=1;i<=no/2;i++) 
	{
		rem = no % i;
		if(rem == 0) 
		   sum = sum + i;
	}
	if(sum == no) 
	   printf("%d is a perfect number",no);
    else
	   printf("%d is not a perfect number",no);
}
