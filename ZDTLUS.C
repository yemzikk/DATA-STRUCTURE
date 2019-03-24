#define MAX 100
#include<stdio.h>
#include<conio.h>
void main()
{
  float stackarr[100],temp;
  int top=-1,i;
  char ch;
  clrscr();
do
{
  printf("\n enter element to PUSH: ");
  scanf("%f",&temp);
  if(top<MAX)
  stackarr[++top]=temp;
else
{
   printf("stack is FULL.can't PUSH any more elements");
   break;
}
   printf("PUSH more(y/n):");
   ch=getche();
}
   while((ch=='y')||(ch=='Y'));
   printf("\n the POP order id");
   printf("\n(TOP)");
   for(;top>-1;top--)printf("\n %g",stackarr[top]);
   printf("\n(BOTTOM)");
   getch();
}
