#include <stdio.h>


void main()
{
    int arr[5],index,sum=0;
         arr[0]=12;
         arr[1]=12;
         arr[2]=12;
         arr[3]=12;
         arr[4]=12;



    for(index=0;index<5;index++)
{

   sum=sum+arr[index];

}

  printf("\n the addition of numbers: %d ",sum);



}
