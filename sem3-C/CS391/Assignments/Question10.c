//Q10:Implement Queue using Linked Lists

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void insert();
int del();
int peek();
void display();

int main()
{
    int item,choice;
    printf("\n\t\t\tMENU DRIVEN PROGRAM\n");
    while(1)
    {
        printf("\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Quit\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                item=del();
                printf("\t\t\tDeleted element is %d.\n",item);
                break;
            case 3:
                item=peek();
                printf("\t\t\tFirst Inserted Element is: %d\n",item);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void insert(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("QueueOverflow\n");
        return;
    }
    temp->data=x;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    return;
}

int del()
{
    int item;
    struct node *temp;
    if(front==NULL)
    {
        printf("QueueUnderflow\n");
        exit(1);
    }
    item=front->data;
    temp=front;
    front=front->next;
    free(temp);
    return item;
}

int peek()
{
    if(front==NULL)
    {
        printf("QueueUnderflow\n");
        exit(1);
    }
    return front->data;
}
void display(){
    if(front==NULL)
    {
        printf("QueueUnderflow\n");
        return;
    }
    printf("\t\t\tElements in the queue are: ");
    struct node *q;
    for(q=front;q!=NULL;q=q->next)
        printf("%d ",q->data);
    printf("\n");
    return;
}