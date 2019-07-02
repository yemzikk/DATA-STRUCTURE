#include<stdio.h>
#include<conio.h>
 void main(){
   int a[10][10],i,j,f=0,n,ele;
   clrscr();
   printf("Enter the Array Size: ");
   scanf("%d", &n);
   printf("Enter the Array Elements:\n");
   for (i = 0; i < n; i++) {
     for (j = 0; j < n; j++)
       scanf("%d",&a[i][j] );
   }
   printf("Enter the item to Search\n");
   scanf("%d",&ele);
   for (i = 0; i < n; i++) {
     for (j = 0; j < n; j++) {
       if (a[i][j]==ele) {
	 printf("Element present at the position [%d] [%d] ",i+1,j+1 );
	 f=1;
       }
     }
   }
   if (f==0) {
     printf("Element not Found");
   }
   getch();
 }
