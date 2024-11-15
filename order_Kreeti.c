#include<stdio.h>
#include<math.h>
void main()
{
    int num=-5,n,j;
    printf("Enter The Range:  ");
    scanf("%d",&n);
    for(j=0;j<=n;j++)
    {
        num=num+j;
        printf("%d,",num);
        if(j<n-1)
        {
            printf(",");
        }
    }
}



