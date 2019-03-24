#include<stdio.h>
#include<conio.h>
int search(int mat[4][4],int n)
{
int i=0,j=n-1;
while(i<n&&j>=0)
{
if(mat[i][j]==n)
{
printf("n found at %d,%d",i,j);
return 1;
}
if(mat[i][j]>n)
j--;
else
i++;
}
printf("n Element not Found");
return 0;
}
void main()
{
int mat[4][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16},};
clrscr();
search(mat,15);
getch();
}