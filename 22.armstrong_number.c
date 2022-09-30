#include<stdio.h>
int main() 
{
	int n, r, temp, sum=0;
	printf("Enter the number: ") ;
	scanf("%d", &n) ;
	temp=n;
	while (n>0) 
	{
		r = n % 10;
		sum = sum + (r * r * r);
		n = n / 10;
	}
	if(temp == sum) 
	    printf("%d is Armstrong number",temp);
	else
		printf("%d is Not Armstrong number",temp);
}
