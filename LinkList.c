#include<stdio.h>

// Defining  Structure for Node


struct Node {
    int data;
    struct Node* next;
};

void show(struct Node* head)
{
    struct Node *new =head; 
    
    
    while(new != NULL)
    {
        printf("%d",new->data);
        new=new->next;
    }
}

void main()
{
    struct Node *head;
    struct  Node *nextNode;
    int n;
    printf("Enter Number of nodes you want to create : ");
    scanf("%d",&n);
    printf("\nEnter Number 1 : ");
    scanf("%d", &(head->data));
    head->next = nextNode;
    for(int i=0;i<n-1;i++)
    {
        printf("\nEnter Number %d : ",i+2);
        scanf("%d", &(nextNode->data) );
        printf("%d",nextNode->data);
        struct  Node newNode;
        nextNode->next=&newNode;
        nextNode=nextNode->next;
    }
    printf("1");
    show(head);
}







