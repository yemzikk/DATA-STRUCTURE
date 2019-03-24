#include<stdio.h>
#include<conio.h>
int length (char *);
void rev(char*);
void main()
{
char s[100];
printf("Enter a String: \n");
gets(s);
rev(s);
printf("Rev of String is :\"%s\".\n",s);
getch();

}
void rev(char *s)
{
int lenth,c;
char *begin,*end,temp;
lenth=length(s);
begin=s;
end=s;
for(c=0;c<lenth-1;c++)
end++;
for(c=0;c<lenth/2;c++)
{
temp=*end;
*end=*begin;
*begin=temp;
begin++;
end--;
}
}
int length(char *pointer)
{
int c=0;
while(*(pointer+c)!='\0')
c++;
return c;
}
