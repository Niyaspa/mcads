#include<stdio.h>
int main()
{
	int ary[10],elements,i;
	int sum=0;
	printf("enter array size\n");
	scanf("%d",&elements);
	for(i=0;i<elements;i++)
	{
		printf("enter array elements\n");
		scanf("%d",&ary[i]);
	}
	for(i=0;i<elements;i++)
	{
		sum=sum+ary[i];
	}
	
	printf("sum o f the array=%d\n",sum);
	return 0;
}	
