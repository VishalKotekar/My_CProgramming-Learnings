#include <stdio.h>

void main()
{
int num1,num2,adddition,substraction;
char menu;


 printf("\n enter first number:  ");
 scanf("%d",&num1);
 printf("\n enter second number:  ");
 scanf("%d",&num2);
 printf("\n [a]:Addition");
 printf("\n [s]:Substraction");

 printf("\n enter your choice:  ");
 scanf(" %c",&menu);






 switch(menu)
 {


  case 'a' :
      {
         adddition=num1+num2;


          printf("\n your addition is:  %d",adddition);
      }
       break;

    case 's' :
    if(num1>=num2)
        {
           substraction=num1-num2;
        printf("\n your substraction is:    %d",substraction);
        }
    else
        {
          substraction=num2-num1;
        printf("\n your substraction is:    %d",substraction);
        }
    break;
 }
}
