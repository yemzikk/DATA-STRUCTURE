#include<stdio.h>
#include<conio.h>

#define  MAX 100
void main()
 {
float stackarr[100],temp;
int top=-1,i;
char ch;
do {
  printf("\n Enter element to PUSH: \n");
  scanf("%f",&temp);
  if (top<MAX)
  {
  stackarr[++top]=temp;
  }
  else
  {
    printf("\n Stack is Full.Can't PUSH New Elements to this Stack");
    break;
  }
  printf("PUSH More(Y/N)\n");
  ch=getch();
} while((ch=='y')||(ch=='Y'));
printf("\nThe POP order is ");
printf("\n(TOP)");
for (; top>-1; top--)
printf("\n %g",stackarr[top] );
printf("\n(BOTTOM)");
getch();
}
