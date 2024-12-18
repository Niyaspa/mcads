#include<stdio.h>
void traversal()
{       struct node*ptr;
        ptr=head;
        while(ptr != NULL)
        {
                printf("%d",ptr->data_);
                ptr=ptr->link;
        }
}
