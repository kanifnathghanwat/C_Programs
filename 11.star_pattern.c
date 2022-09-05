#include<stdio.h>
int main()
{
    int i,j,k,sp=3;
    for(i=1;i<=3;i++)
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
         }
        sp--;
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
         }
         printf("\n");
     }
    sp=1;
    for(i=1;i<=2;i++)
    {
        for(k=0;k<=sp;k++)
        {
            printf(" ");
        }
        sp++;
            for(j=2;j>=i;j--)
            {
                printf("*");
            }
            printf("\n");
        
    }
}
