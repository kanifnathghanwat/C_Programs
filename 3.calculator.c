#include <stdio.h>
 int main()
{
    int a,b;
    float result;
    char ch;
     printf("Enter your Expression:-");
     scanf("%d%c%d",&a,&ch,&b);
    result=0;
    switch(ch)    
    {
        case '+':result=a+b;
            break;
        case '-':result=a-b;
            break;
        case '*':result=a*b;
            break;
        case '/':result=(float)a/(float)b;
            break;
        case '%':result=a%b;
            break;
        default:printf("Invalid operation...\n");
    }
    printf("Result: %d %c %d = %f\n",a,ch,b,result);
    return 0;
}
