//deleting an element from array of elements
#include<stdio.h>
void deletion(int a[100],int n);
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	deletion(a,n);
	return 0;
}
void deletion(int a[100],int n)
{
	int i,pos;
	scanf("%d",&pos);
	n--;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

