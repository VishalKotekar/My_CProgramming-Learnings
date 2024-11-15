#include <stdio.h>
#include <string.h>
void main()
{
    int i,j;
    char text[50];

    printf("\n Enter The Text: ");
    scanf("%c",&text[i]);

    for(i=0;text[i]!='\0';i++)
    {
        for(j=0;j<strlen(text[i]);j++)
        {
            if(text[j]==67 && text[j]==100)
            {
                text[j]=text[j+1];
            }
        }
    }
    printf("\n Text:= %c",text);
    }


