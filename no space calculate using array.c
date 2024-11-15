#include<stdio.h>
void main()
{
    int i;
    int j=0;
    char text1[30],text2[30];

    printf("enter the text: ");
    gets(text1);

    for(i=0;i<=strlen(text1);++i)
    {
        if(text1[i]!=32)
        {
            text2[j++]=text1[i];
        }
    }
    printf("text: %s",text2);
}
