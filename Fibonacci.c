#include <stdio.h>
void main()
{
    int num1=0,num2=1,i,r,n;


    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Fibonacci series:\n ");
    printf("%d\n%d\n",num1,num2);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",r);
        num1=num2;
        num2=r;
        r=num1+num2;
    }
    for(i=1;i<=n;i++)
    {
        if(r%2==0)
        {
            printf("Even Numbers: %d",r);
        }
        else if(r%2!=0)
        {
            printf("Odd numbers :%d",r);
        }
    }
}
