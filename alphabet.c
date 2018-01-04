#include<stdio.h>
#include<conio.h>
void main()
{
 char letter;
 clrscr();
 printf("enter the letter");
 scanf("%c",&letter);
 if((letter<'A'&&letter>'Z')||(letter<'a'&&letter>'z')
 {
 printf("\nalphabet");
 }
 else
 printf("\nnot an alphabet");
 getch();
 }
