#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int n,temp;
printf("Enter A Number:");
scanf("%d",&n);
n=temp;
fact(n);
getch();
printf("Factorial of %d is %d",n);
return 0;
}
double fact(int n)
{
int i=1,temp,value;
value=1;
n=temp;
while(n!=i)
{
value=value*temp;
temp=temp-1;
i++;
fact(n);
}
return value;
}