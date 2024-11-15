#include <stdio.h>
void main(){
int i,j,k,n;
printf("Enter The Range: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<i;j++)
    {
        printf(" ");
    }
    for(k=1;k<=2*(n-i)-1;k++)
    {
        printf("*");
    }
    printf("\n");
}
}
