#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	while(i>0)
	{
		j=1;
		while(i>=j)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
