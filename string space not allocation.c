#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i,j;
    char text[20];

    printf("Enter the Text: ");
    gets(text);
    for(i=1;text[i]!='\0';++i)
    {
        if(text[i]==' ')
        {
            for(j=i;j<strlen(text);++j)
            {
              text[j]=text[j+1];
            }
        }
    }
    puts(text);
    return 0;
}
