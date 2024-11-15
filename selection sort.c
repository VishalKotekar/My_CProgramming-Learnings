#include <stdio.h>
void main()
{
    int i,j,temp,s;
    int num[5];

    printf("\n Enter The Number:\n");
    for(i=1;i<6;++i)
    {
         scanf("%d",&num[i]);
    }
    for(i=1;i<6-1;++i)
    {
        for(j=i+1;j<6;++j)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n The Sorted Element's: ");
    for(s=1;s<6;s++)
    {
            printf("\n%d",num[s]);
    }
}
