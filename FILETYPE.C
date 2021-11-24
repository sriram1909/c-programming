#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("ratnarao sir number.txt","r");
ch=getchar();
while(ch!=EOF)
{
putc(ch,fp);
ch=getchar();
}
fclose(fp);
}