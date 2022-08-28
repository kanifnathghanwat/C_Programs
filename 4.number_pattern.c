#include<stdio.h>
int main()
{
    int i,a=1;
    for(i=1;i<=28;i++)
    {
        if(i==8 || i==15 || i==22)
        {
            printf("\n\n");
        }
        if(i>=1 && i<=3 || i>=5 && i<=7 || i==8 || i==9 ||i==13 || i==14 ||i==15 || i==21)
        {
            printf("    ");
        }
        else
        {
            printf("%4d",a);
            a++;
        }
    }
}
