#include<stdio.h>
#include<string.h>
void main()
{
    char text[100];
    int i,j;
    int data;
    char txt;
    printf("Enter the text: ");
    scanf("%s",&text);
     for(i=1;text[i]!='\0';++i)
    {
        if(text[i].isdigit())
        {
            for(j=i;j<strlen(text);++j)
            {
                data=text[i];
            }
        }
        else
        {
            txt=text[i];
        }
    }
    puts("data: %d\n",data);
    puts("txt: %c",txt);

}
