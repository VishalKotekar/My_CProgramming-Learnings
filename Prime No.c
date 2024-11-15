#include <stdio.h>
int main()
{
    int Num;

    printf("\n Enter The Number: ");
    scanf("%d",&Num);
    if(Num==2||Num==3||Num==5||Num==7)
    {
        printf("\n prime No");
    }
    else if(Num%2!=0 && Num%3!=0 && Num%5!=0)
    {
        printf("\n Prime no");
    }
    else
    {
        printf("\n Not Prime No");
    }
    return 0;
}
