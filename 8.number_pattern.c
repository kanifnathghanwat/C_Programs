#include<stdio.h>
int main()
{
    int i,j,k,sp=4,a=15;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=sp;k++)
        {
            printf("\t");
        }
        sp--;
        for(j=1;j<=i;j++)
        {
             printf("%d\t",a);
             a--;
        }
        printf("\n");
     }
 }
