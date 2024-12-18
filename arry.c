#include<stdio.h>
int main()
{               
        int arry[10],size,i;
        int sum=0;
        printf("enter the size of array:");
        scanf("%d",&size);
        printf("enter the array ele:");
        for(i=0;i<size;i++)
                scanf("%d",arry[i]);
        for(i=0;i<size;i++)
                sum=sum+arry[i];
        printf("sum of the array:%d",sum);   
return 0;        
}
