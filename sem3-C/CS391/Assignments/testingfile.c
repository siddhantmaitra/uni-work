
// Implement Circular Queue operations using arrays.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void insert();
int delete();
int peek();
void display();

void main()
{
    int item,choice;
    printf("\nMENU: \n");
    while(1)
    {
        printf("\n");
        printf("1. Insert an element\n");
        printf("2. Delete the element\n");
        //printf("3. Peek\n");
        printf("3. Display the elements\n");
        printf("4. Quit\n\n");
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
                item=delete();
                printf("Deleted element is %d.\n",item);
                break;
            /*case 3:
                item=peek();
                printf("First Inserted Element is: %d\n",item);
                break;*/
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void insert(int x)
{
    if((rear+1)%MAX==front) //if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Overflow\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    if(rear==MAX-1)
        rear=0;
    else
        rear=rear+1;
    queue[rear]=x;
    return;
}

int delete()
{
    int item;
    if(front==-1)
    {
        printf("Underflow\n");
        exit(1);
    }
    item=queue[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==MAX-1)
        front=0;
    else
        front=front+1;
    return item;
}

int peek()
{
    if(front==-1)
    {
        printf("Underflow\n");
        exit(1);
    }
    return queue[front];
}

void display(){
    if(front==-1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Elements in the queue are: ");
    int i=front;
    if(front<=rear)
    {
        while(i<=rear)
            printf("%d ",queue[i++]);
    }
    else{
        while(i<=MAX-1)
            printf("%d ",queue[i++]);
        i=0;
        while(i<=rear)
            printf("%d ",queue[i++]);
    }
    printf("\n");
    return;
}