#include<stdio.h>
#include<conio.h>
void main()
{
  float arr[100],temp;
  int i,j,elements,min,count;
  printf("\n How many elements in that array (1-100):");
scanf("%d",&elements);
count=elements-1;
if (elements<1 || elements>100)
 {
printf("\n Elements Should be within 1-100");
getch();
exit(1);
}
for (i = 0; i <elements; i++) {
  printf("Arr[%d]=",i);
  scanf("%f",&arr[i]);
}
printf("\n Existing List \n");
for (i = 0; i <elements; i++)
{
printf("Arr[%d]=%g\n",i,arr[i] );

}
getch();
}
