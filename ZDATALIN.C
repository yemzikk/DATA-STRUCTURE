#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
struct node*next;
};
typedef struct node NODE;
NODE*start;
void createemptylist (NODE*start)
{
*start=NULL;
}
void traverse(NODE*p)
{
printd("%d \n",P->num);
p=p->next;
}
}
void insertatbegin(int item)
{
NODE*p;
p=(NODE*)malloc(size of(NODE));
p->num=item;
if(start==NULL)
p->next=start;
else
p->next=star;
start=p;
}
void insert_at_end(int item)
{
NODE*p,*loc;
p=(NODE*)malloc(size of(NODE));
p->num=item;
p->next=NULL;
if (start==NULL)
start=p;
else
{
loc=start;
while(loc->next!=NULL)
loc=loc->next;
loc->next=ptr;
}
}
void dele_beg(void)
{
NODE*p;
if(start==NULL)
printf("List is empty");
else
p=start;
start=start->next;
printf("No Deleted is=%d",p->num);
free(p);
}
}
void dele_end()
{
NODE*p,*loc;
if(start==NULL)
{
printf("List is Empty");
}
else if((start)->next==NULL)
{
p=start;
start=NULL;
printf("No Deleted is =%d",p->num);
free(p);
}
else
{
loc=start;
p=start->next;
while(p->next=NULL)
{
loc=p;
p=p->next;
}
loc->next=NULL;
printf("No Deleted is=%d",p->num);
free(p);
}
}
void insert_spe (NODE *start, int item)
{
NODE *p,*loc;
int temp,k;
for(k=0;loc=start;k<temp;k++)
{
loc=loc->next;
if(loc==NULL)
{
printf("node in the list at lessthan one\n");



