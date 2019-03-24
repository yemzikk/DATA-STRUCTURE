#include<stdio.h>
#include<conio.h>
void main()
{
int array1[50],array2[50],size1,size2,size,i,j,k,merge[100];
clrscr();
printf("Enter Sorted Array 1 Size:");
scanf("%d",&size1);
printf("Enter Sorted Array 1 Elements:");
for(i=0;i<size1;i++)
{
scanf("%d",&array1[i]);
}
printf("Enter Sorted Array 2 Size:");
scanf("%d",&size2);
printf("Enter Sorted Array 2 Elements:");
for(i=0;i<size2;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<size1&&j<size2)
{
if(array1[i]<array2[j])
{
merge[k]=array1[i];
i++;
}
else
{
merge[k]=array2[j];
j++;
}
k++;
}
if(i>=size1)
{
while(j<size2)
{
merge[k]=array1[i];
j++;
k++;
}
}
if(j>=size2)
{
while(i<size1)
{
merge[k]=array1[i];
i++;
k++;
}
}
printf("Now the New Array After Merging is:\n");
size=size1+size2;
for(i=0;i<size;i++)
{
printf("%d",merge[i]);
}
getch();
}