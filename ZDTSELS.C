#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,count,temp,number[25];
  printf("How Many Numbers to Enter?\n");
  scanf("%d",&count );
  printf("Enter %d Elements\n",count);
  for (i = 0; i < count; i++)
    scanf("%d",&number[i]);
    for (i = 0; i < count; i++) {
    for (j = i+1; j < count; j++) {
      if (number[i]>number[j]) {
	  temp=number[i];
	  number[i]=number[j];
	  number[j]=temp;
      }
    }
  }
  printf("Sorted Elements Are \n");
  for (i = 0; i < count; i++) {
      printf("Arr[%d]%d",i,number[i] );
      printf("\n");
  }
  getch();
}
