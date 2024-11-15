#include <stdio.h>
void main()
{
    int arr[5],index,sum=0;

    printf("\n enter the array :" );
    for(index=0;index<5;index++)
    {
     scanf("%d",&arr[index]);
        sum=sum+arr[index];
    }
   printf("\n sum of array's :%d",sum);
 }
