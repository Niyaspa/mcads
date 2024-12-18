#include<stdio.h>
int main()
{
	int ary[10],size,i;
	int sum=0;
	printf("enter array size\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&ary[i]);
	for(i=0;i<size;i++)
		sum=sum+ary[i];
	printf("sum o f the array=%d\n",sum);
	return 0;
}	
