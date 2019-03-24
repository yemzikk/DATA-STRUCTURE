#include<stdio.h>
#include<conio.h>
void main()
{
  float queuearr[100],temp;
  int front,rear=-1;
  char ch;
  clrscr();
  do {
    printf("\n Enter element to PUSH");
    scanf("%f",&temp);
    if(rear<100)
    queuearr[++rear]=temp;
    else
    {
      printf("\nQueue is FULL. Can't Insert  New elements to this Queue");
      break;
    }
    printf("Insert More(Y/N)?\n");
    ch=getch();
  } while((ch=='y')||(ch=='Y'));
  printf("\n The Deletion Order is");
  printf("\n(FRONT)");
  for (front=0;front<=rear;front++)
  printf("\n%g",queuearr[front]);
  printf("\n(REAR)");
  getch();
}
