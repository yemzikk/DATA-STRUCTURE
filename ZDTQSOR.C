#include<stdio.h>
#include<conio.h>
void main(){
void q_sor(float[],int,int);
  float Arr[100];
  int i,Elements;
  printf("\nHow many elements in the array(1-100)?" );
  scanf("%d",&Elements );
  if (Elements<1||Elements>100) {
    printf("\nElements should be within 1-100");
    getch();
    exit(1);
  }
  for (i = 0; i < Elements; i++) {
    printf("Arr[%d]=",i);
    scanf("%f",&Arr[i] );
  }
  printf("\n Existing List\n");
  for (i = 0; i < Elements; i++)
    printf("Arr[%d]=%g\n",i,Arr[i]);
    q_sor(Arr,0,Elements-1);
    printf("Sorted List\n");
    for (i = 0; i < Elements; i++)
      printf("Arr[%d]=%g\n",i,Arr[i]);
    getch();
  }
void q_sor(float a[],int lower,int upper) {
  int split(float[],int,int);
  int v;
  if (upper>lower) {
    v=split(a,lower,upper);
    q_sor(a,lower,v-1);
    q_sor(a,v+1,upper);
  }
}
int split(float a[],int lr,int ur){
  int v,p,q,t;
  p=lr+1;
  q=ur;
  v=a[lr];
  while (q>=p) {
    while (a[p]<v)p++;
      while (a[q]>v)q--;
	if (q>p) {
	  t=a[p];
	  a[p]=a[q];
	  a[q]=t;
	}
      }
      t=a[lr];
      a[lr]=a[q];
      a[q]=t;
      return q;
}