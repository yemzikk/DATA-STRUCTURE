#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
  struct node
  {
    int data;
    struct node *next;
  }*front=NULL;
  struct node *temp,*current;
  char ch;
  do
  {
  current=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the node data:");
  scanf("%d",&current->data);
    if (front==NULL)
    {
    front = current;
    current->next =front;
    }
   else
   {
      for (temp=front;temp->next!=front;temp=temp->next);
      {
      temp->next=current;
      current->next =front;
      }
    printf("Add More(Yes/No)?\n");
    ch=getch();
  }
while((ch=='Y')||(ch=='y'));  {
printf("\n The Circular List is:");
temp=front;
}
do
 printf("%d->",temp->data );
  temp=temp->next;
  while(temp!=front);{
printf("Linked Back to First Node:");
getch();
}
