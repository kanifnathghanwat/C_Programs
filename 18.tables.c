#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=10)
		{
			printf("%4d",i*j);
			j++;
		}
		i++;
		printf("\n");
	}
}
