#include <stdio.h>
int main()
{
    int num,i,count;
    printf("\n Enter the Number: ");
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
        count=num*i;
        printf("\n %d*%d=%d",num,i,count);
        i++;
    }
}
