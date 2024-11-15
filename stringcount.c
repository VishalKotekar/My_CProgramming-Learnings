#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char text[40];
    int count=0;
    printf("\n Enter The Text: ");
    gets(text);
    for(i=0;text[i]!='\0';++i)
    {
        if(text[i]==32)

            gets(text);
            count++;


    }
    printf("\n%d",count);
    return 0;
}
