#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push(int);
void pop();
void Display();
int stack[SIZE],TOP=-1;
void main()
{
int value,choice;
clrscr();
while(1)
{
printf("\n \n ***menu***\n");
printf("\n 1.push\n 2.pop\n 3.Display\n 4.Exit");
printf("\n Enter your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter the value to be insert");
scanf("%d",&value);
push(value);
break;
case 2:pop();
break;
case 3:Display();
break;
case 4:exit(0);
default:printf("\n Wrong Selection !!!!!!!!!!!!! tRY aGAin !!!!!!!!!!!!");
}
}
}
void push(int value)
{
if(TOP==SIZE-1)
printf("\n Stack is Full !!!!!!!!!!!!!! Insertion is not PoSsiBlE");
else
{
TOP++;
stack[TOP]=value;
printf("\n INserTiON sUCeSs:\n");
}
}
void pop()
{
if(TOP==-1)
printf("\n Stack is Empty !!!!!!!!!!!!!!!!!!!!!!!!!! DeLeTion nOt pOsSibLe !!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
else
{
printf("\n DelEted: %d",stack[TOP]);
TOP--;
}
}
void Display()
{
if(TOP==-1 )
printf("Stack is Empty !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
else
{
int i;
printf("Stack Elements are:\n");
for(i=TOP;i>=0;i--)
printf("%d \n",stack[i]);
}
}