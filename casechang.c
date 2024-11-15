#include <stdio.h>
void main()
{
    int i,j;
    char text[50];

    printf("\n Enter the text: ");
    scanf("%c",&text[i]);
    for(i=0;text[i]!='\0';++i)
    {
        if(text[j]<=65 && text[j]<=90)
        {
        for(j=i;text[j]<=strlen(text[i]);++j)
        {
            text[j]=text[j+1];
        }
        }
        else if(text[i]<=97 && text[i]<=122)
        {
        for(j=i;text[j]<=strlen(text[i]);++j)
        {
            text[j]=text[j+1];
                }
                }
    }
            puts(text);
    }

