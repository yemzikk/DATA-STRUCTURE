#include<stdio.h>
#include<conio.h>
void main()
{
  struct node
  {
    int data;
    struct node*next;
  }*front=NULL,*rear=NULL;
  struct node*newnode;
  char ch;
  clrscr();

  do {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter element To PUSH");
  scanf("%d\n",&newnode->data );
  if (rear==NULL)
   {
    rear=front=newnode;
    rear->next=NULL;
  }
  else
  {
    newnode->next=rear;
    rear=newnode;
  }
  printf("\n Add More(Y/N)?");
  ch=getch();
  }
  while((ch=='y')||(ch=='Y'));
  printf("\nThe Deletion Order is ");
  printf("\n(FRONT)");
  for (;front!=NULL;front=front->next)
  printf("\n%d",front->data);
  printf("\n(REAR)");
  getch();
}
