#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
struct node
{
int data;
struct node*next,*prev;
}*start=NULL;
struct node *new_node,*current;
char ch;
do
{
new_node=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the Node data:");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(start==NULL)
{
  new_node->prev=NULL;
  start=current=new_node;
}
else
{
  current->next=new_node;
  new_node->prev=current;
  current=new_node;
}
printf("Add More(Y/N)?");
ch=getch();
}
while ((ch=='y')||(ch=='Y'));
printf("\n The Linked List is " );
for(new_node=start;new_node!=NULL;new_node=new_node->next)
printf("%d ->",new_node->data );
printf("NULL");
getch();
}
