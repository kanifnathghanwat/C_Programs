#include<stdio.h>
int main()
{
	int i,a,j;
	printf("Enter a number:");
	scanf("%d",&a);
	i=a;
	while(i>0)
	{
		j=0;
		while(i>j)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
