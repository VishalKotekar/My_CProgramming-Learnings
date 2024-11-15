#include <stdio.h>

void main()
{
    int num,count,positive = 0,negative = 0,zero = 0;

         printf("\n enter the count\n");
        scanf("%d",&count);

        printf("\n %d enter the number\n :",count);

   while(count)
    {

        scanf("%d",&num);



        if(num>0)
        {
           positive++;
        }
        else
        if(num<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        count--;

    }


{
    printf("\n positive numbers: %d",positive);
}

{

    printf("\n negative numbers: %d",negative);
}


{
    printf("\n zero valued numbers: %d",zero);
}

}
