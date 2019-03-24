#include<stdio.h>
#include<conio.h>
void main()
{
struct node
{
int data;
struct node*next;
}*start=NULL;
struct node*newnode,*temp,*t;
char ch;
int i,n;
clrscr();
do
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter The Node Data:");
scanf("%d",&newnode->data);
if(start==NULL)
{
start=newnode;start->next=NULL;
}
else
{
newnode->next=start;start=newnode;
}
printf("Add More(Y/N)?");
ch=getch();
}
while((ch=='y')||(ch=='Y'));
printf("\n The Linked List is:\n");
for(temp=start,i=1;temp!=NULL;temp=temp->next,i++)
printf("[%d]%d->",i,temp->data);
printf("NULL");
printf("\n Which Node to Delete(1-%d)?",i-1);
scanf("%d",&n);
if(n<1||n>i-1)
printf("Invalid Node.Node Must be within 1-%d",i-1);
else
{
for(temp=start,i=1;temp->next!=NULL;temp=temp->next,i++)
{
if(i==n)
break;
t=temp;
}
if(start==temp)
start=temp->next;
else
t->next=temp->next;
printf("\n The New Linked List is\n");
for(temp=start,i=1;temp!=NULL;temp=temp->next,i++)
printf("[%d] %d->",i,temp->data);
printf("NULL");
}
getch();
}




