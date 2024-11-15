#include <stdio.h>

void main()
{
    int i;
    char text[30];
    int vowels=0;
    int consonent=0;

    printf("\n enter the text: ");
    gets(text);
    for(i=0;i<strlen(text);++i)
    {
        if((text[i]=='a')||(text[i]=='A')||(text[i]=='i')||(text[i]=='I')||(text[i]=='e')||(text[i]=='E')||(text[i]=='o')||(text[i]=='O')||(text[i]=='u')||(text[i]=='U'))
        {
            vowels++;
        }

    else
    {
        consonent++;
    }
    }
    printf("\n total vowels: %d",vowels);
    printf("\n total consonent: %d",consonent);

}
