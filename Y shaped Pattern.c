#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter The Range: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
         if((i==j && j<=4)||(i+j==7 && i<=4)|| j==4)
         {
            printf("*");
         }
         else
         {
             printf(" ");
         }

        }
        printf("\n");
    }
}
