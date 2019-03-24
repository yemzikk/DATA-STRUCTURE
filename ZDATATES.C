#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
struct node
{
int num;
struct node * next;
};
typedef struct node NODE;
NODE*head,*first,*temp=0;
int count=0;
int choice=1;
first=0;
clrscr();
while(choice)
{
head=(NODE*)malloc(sizeof(NODE));
printf("Enter The Data Item:\n");
scanf("%d",&head->num);
if(first!=0)
{
temp->next=head;
temp=head;
}
else
{
first=temp=head;
}
fflush(stdin);
printf("Do You Want to Continue(Type 0 or 1)");
scanf("%d",&choice);
}
temp->next=0;
temp=first;
printf("\n status of the linked list is \n");
while(temp!=0)
{
printf("%d=>",temp->num);
count++;
temp=temp->next;
}
printf("NULL \n");
printf("no. of node in a list=%d \n ",count);
getch();
}
