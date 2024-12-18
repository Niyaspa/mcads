#include<stdio.h>
int main()
{
        int a=1;
        int b=2;
        int c;
        printf("a before swapping %d\n",a);
        printf("b before swapping %d\n",b);
        
        c=a;
        a=b;
        b=c;
        
         printf("a after swapping %d\n",a);
         printf("b after swapping %d\n",b);
}
