#include<stdio.h>
#include<stdlib.h>
struct node   
{  
        int data;   
        struct node*link;  
};  
 
        struct node*header=NULL;
        struct node*createnode(int data)
        {
                struct node*newnode;
                newnode=malloc(sizeof(struct node)); 
                newnode->data=data;
                newnode->link=NULL;
                return(newnode);
                
}
        void insertAtFront(int data)
        {
                struct node*newnode;
                newnode=createnode(data);
                if(header==NULL)
                {
                        header=newnode;
                }
                else
                {
                        newnode->link=header;
                        header=newnode;
                }       
}    
  void traversal()
{       struct node*ptr;
        ptr=header;
        while(ptr!=NULL)
        {
                printf("%d",ptr->data);
                ptr=ptr->link;
        }
        
}          
 int main()
 {
        struct node*ptr;
        insertAtFront(10);
        insertAtFront(20);
        traversal();
        return 0;
 }

