#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("filename.txt","r");//we can also give 'w' or 'a'
ch=getchar();
while(ch!=EOF)
{
putc(ch,fp);
ch=getchar();
}
fclose(fp);
}
