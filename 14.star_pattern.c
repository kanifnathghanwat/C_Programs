#include<stdio.h>
int main()
{
	int i,j,k,sp=26;
	i=0;
	while(i<=26)
	{
		j=0;
		while(j<sp)
		{
			printf(" ");
			j++;
		}
		k=0;
		while(k<=i)
		{
			printf("     *");
			k++;
		}
		printf("\n");
        i++;
        sp--;
	}
}
