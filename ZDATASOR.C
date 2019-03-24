#include<stdio.h>
#include<conio.h>
void main()
{
 char name[5][10],temp[10];
 int i,j,n;
 clrscr();
 printf("enter a number of student");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 fflush(stdin);
 printf("enter the name of students %d",i+1);
 gets(name[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
 if(strcmp(name[j],name[j+1])>0)
 {
 strcpy(temp,name[j]);
 strcpy(name[j],name[j+1]);
 strcpy(name[j+1],temp);
 }
 }
 }
 printf("name of the student are in sorted is");
 for(i=0;i<n;i++)
 {
 puts(name[i]);
 }
 getch();
 }
