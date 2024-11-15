#include <stdio.h>
#include <string.h>
void main()
{
 int i,count=0;
 char Word[20];
 puts("\n enter the word := ");
 gets(Word);
 for(i=0; Word[i]!='\0';++i)
 {
 if(Word[i]==32)

    gets(Word);
    count++;

 }
  printf("Count:= %d",count);
}
