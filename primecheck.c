#include <stdio.h>
void main(int main)
{
    int i,flag=0,num;
    printf("\n Enter the Number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            flag++;
            printf("\n It is a Prime no %d \n",flag);
        }
        else
        {
            printf("\n It is not a prime no");
        }
    }

}
