#include <stdio.h>

void main()
{
    int age;
    char gender,martial_status;

    gender='f' || 'm';
    martial_status= 'm' || 'U';

    printf("\n enter the age :");
    scanf("%d",&age);


    printf("\n [f]:=female %c",gender);
    printf("\n [m]:=male %C",gender);

    printf("\n enter the gender :");
    scanf(" %c",&gender);

    printf("\n [m]:=married %c",martial_status);
    printf("\n [U]:=unmarried %c",martial_status);


    printf("\n enter the martial_status :");
    scanf(" %c",&martial_status);

    if(age>=30 && gender=='f' && martial_status=='m')
    {
        printf("\n insured%d,%c,%c",age,gender,martial_status);
    }
    else

     if(age>=26 && gender=='m' && martial_status=='u')
    {
        printf("\n insured%d,%c,%c",age,gender,martial_status);
    }
    else

     if(age>=26 && gender=='f' && martial_status=='u')
    {
        printf("\n insured%d,%c,%c",age,gender,martial_status);
    }
    else

    if(age>=23 && gender=='f' && martial_status=='m')
    {
        printf("\n insured%d,%c,%c",age,gender,martial_status);
    }
    else

    if(age>=26 && gender=='m' && martial_status=='u')

    {
       printf("\n insured %d,%c,%c",  age,gender,martial_status);
    }


    else

    {
        printf("\n noninsured %d,%c,%c",age,gender,martial_status);


    }


         }





