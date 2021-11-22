#include<stdio.h>
struct employee
{
	int eno;
	char name[20],dept[20];
	long int sal;
};
typedef struct employee emp;
void input(emp *p,int size)
{
	int i;
	for(i=0;i<size;i++,p++)
	{
		printf("Enter employee number,name,dept,salary\n");
		scanf("%d %s %s %ld",&p->eno,p->name,p->dept,&p->sal);
	}
}
	void display(emp *p,int size)
	{
		int i;
		for(i=0;i<size;i++,p++)
			printf("\nEmployee number		:%d\nEmployee name		:%s\nDepartment		:%s\nSalary			:%ld\n",p->eno,p->name,p->dept,p->sal);
	}
	int main()
	{
		emp e[10];
		int i,n;
		printf("Enter no.of employees data to input:");
		scanf("%d",&n);
		input(e,n);
		display(e,n);
	}
