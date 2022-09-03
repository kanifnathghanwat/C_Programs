#include<stdio.h>
int main()
{
    int k=1;
ADARSH:

    if(k<=25)
    {
        if(k==1||k==6||k==11||k==16||k==21)
        {
            printf("\n");
        }
        if(k>=1 && k<=2||k>=4 && k<=5||k==6||k==10||k==16||k==20||k>=21 && k<=22||
                k>=24 && k<= 25)
        {
            printf("  ");
        }
        else
        {
            printf("* ");
        }
        k++;
        goto ADARSH;
    }
}
