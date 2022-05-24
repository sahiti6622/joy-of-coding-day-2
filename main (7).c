#include<stdio.h>
#include<stdlib.h>
void insert(int *q,int *n,int*r)
{
	printf("enter the elements\n");
	for(int i=0;i<*n;i++)
	{
		scanf("%d",&q[++(*r)]);
	}
} 
void display(int *q,int f,int r)
{
	for(int i=f;i<=r;i++)
	{
		printf("%d\t",q[f++]);
	}
}
int * permut(int *q,int *n,int *f,int p,int *r)
{
	 *n=(*n)+p;
	printf("%d\n",*n);
	q=(int*)realloc(q,sizeof(int)*(*n));
	for( ;(*f)<p;(*f)++)
	{
	    
		q[++(*r)]=q[*f];
		printf("%d\n",q[*r]);
	}
	return q;
}
int main()
{
	int *q;
	int n,p,r=-1,f=0;
	printf("enter the elements\n");
	scanf("%d",&n);
	q=(int*)calloc(n,sizeof(int));
	insert(q,&n,&r);
	display(q,f,r);
	printf("\n");
	printf("enter the number of elements permuted\n");
	scanf("%d",&p);
	q=permut(q,&n,&f,p,&r);
	display(q,f,r);
	return 0;
}

