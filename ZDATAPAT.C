#include<stdio.h>
#include<conio.h>
#include<string.h>
int match(char[],char[]);

void main()
{
char a[1000],b[1000];
int position;
clrscr();
printf("Enter Some Text:\n");
gets(a);
printf("Enter a String To Find:\n");
gets(b);
position=match(a,b);
if(position!=-1)
{
printf("Found at Location:%d\n",position+1);
}
else
{
printf("Not Found:\n");
}
getch();
}
int match(char text[],char pattern[])
{
int c,d,e,textlen,patternlen,position=-1;
textlen=strlen(text);
patternlen=strlen(pattern);
if(patternlen>textlen)
{
return-1;
}
for(c=0;c<=textlen-patternlen;c++)
{
position=e=c;
for(d=0;d<patternlen;d++)
{
if(pattern[d]==text[e])
{
e++;
}
else
{
break;
}
}
if(d==patternlen)
{
return position;
}
}
return-1;
}

