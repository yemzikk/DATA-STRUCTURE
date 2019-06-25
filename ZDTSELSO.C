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
//Sorting Section
// for (i = 0; i <elements; i++)
// {
// min=i;
// for (j=i+1;j<elements; j++)
// {
//   if (arr[j]<arr[min])
//    {
//     min=j;
//   }
//   temp=arr[i];
//   arr[i]=arr[min];
//   arr[min]=temp;
// }

// for (i = 0; i < count; i++) {
//   for (j = i+1; j < count; j++) {
//     if (arr[i]<arr[j]){
//       for (i = 0; i < elements; i++){
//       printf("Arr[%d]=%g\n",i,arr[i]);
//       }
//     }
//
//   }
// }
// printf("Sorted List\n");
// for (i = 0; i < elements; i++)
// printf("Arr[%d]=%g\n",i,arr[i]);
// }
getch();
}
