#include <stdio.h>


void main()
{
  int physics,chemistry,maths,total,avg;


  printf("\n enter the marks of physics : ");
  scanf("%d",&physics);


  printf("\n enter the marks of chemistry : ");
  scanf("%d",&chemistry);


  printf("\n enter the marks of physics : ");
  scanf("%d",&maths);

   total=physics+chemistry+maths;
   avg=total/3;
    printf("\n your avg is : %d",avg);




   if(physics<=40 || chemistry<=40 || maths<=40 || avg<=50 )
   {

  printf("\n you're failed %d,%d,%d,%d",physics,chemistry,maths,avg);

   }
   else

if(avg>=75 && avg<=100)
 {
      printf("\n you're passed and get distinction %d",avg);


 }
 else

 if(avg>=60 && avg<=74)
 {
      printf("\n you're passed and get second class %d",avg);
 }

else

    if(avg>=40 && avg<=59)
{
     printf("\n you're passed and get third class %d",avg);
}
else
{
     printf("\n you're failed %d",avg);
}


     }

