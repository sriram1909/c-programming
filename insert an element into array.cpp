//inserting an element in a program
#include<stdio.h>
void insert(int a[100],int n);
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,n);
}
void insert(int a[100],int n)
{
	int i,pos,key;
	scanf("%d %d",&pos,&key);
	n++;
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=key;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
