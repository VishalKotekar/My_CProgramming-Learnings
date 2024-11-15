#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
    clrscr();
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i=1;i<=50;i++)
    {
        printf(" I LOVE U /j");
        delay(200);
    }
    getch();
}
