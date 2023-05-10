#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype* next;
    int data;
}node;
node* memory()
{
    node* p;
    p=(node*)malloc(sizeof(node));
    p->next=0;
    return p;
}
node * create(node * head)
{
    node * new_node,*temp=head,*p;
    int x;
    printf("enter the number you want to insert in the node");
    scanf("%d",&x);
    p->data=x;
    if (temp==0)
    {
        
    }
}