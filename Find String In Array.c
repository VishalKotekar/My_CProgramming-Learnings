#include <stdio.h>
#include <string.h>
    void main()
        {
        char text[]={"Welcome To The coding club"};
        char word[50];
        int i,j=0,k;

            for(i=0;i<strlen(text);++i)
            {
                if(text[i]!=32)
                {
                    word[j]=text[i];
                    j++;
                }

            for(k=0;k<strlen(word);k++)
                {
                    if(word[k]=='c')
                    {
                        break;
                    }
                }
            }
            printf("%c",word[k]);
        }
