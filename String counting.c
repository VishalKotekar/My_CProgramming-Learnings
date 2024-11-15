#include <stdio.h>
#include <string.h>
void main()
{
    char text[60];
    int i=0,j=0;

    printf("\n Enter The Text You Want: ");
    gets(text);
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==32)
        {
        for(j=i;j<strlen(text);j++)
        {
                text[j]=text[j+1];
        }
    }
}
    puts(text);
}
