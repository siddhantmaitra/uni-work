#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*start=NULL;

main()
{
    int i,choice,n,d,pos,count;
    void reverse ();
    void create_list(int);
    void display();
    void insert_begin(int);
    void insert_specific(int,int);
    void count_nodes();
    void search(int);
    void del_node(int);
    void del_node_val(int);
    void reverse();
    while(1)
    {
        printf("press 1 to create the list:\n");
        printf("press 2 to display the list:\n");
        printf("press 3 to insert a node at begin of the list:\n");
        printf("press 4 to insert a node at specific position of the list:\n");
        printf("press 5 to count the nodes of the list:\n");
        printf("press 6 to search for an element in the list:\n");
        printf("press 7 to delete a node from the list by position:\n");
        printf("press 8 to delete a node from the list by value:\n");
        printf("press 9 to reverse the list:\n");
        printf("press 10 to exit:\n");
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1: printf("Enter the initial population");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
                     printf("Enter the value of the node");
                     scanf("%d",&d);
                     create_list(d);
                   }
                   break;

           case 2: display();
                break;

           case 3: printf("Enter the value of the node");
                     scanf("%d",&d);
                     insert_begin(d);
                     break;
           case 4: printf("Enter the position and value of the node");
                   scanf("%d%d",&pos,&d);
                   insert_specific(pos,d);
                   break;
           case 5: count_nodes();
                    break;

           case 6: printf("Enter the value of the search element");
                   scanf("%d",&d);
                   search(d);
                   break;
           case 7: printf("Enter the position of the node to be deleted");
                   scanf("%d",&d);
                   del_node(d);
                   break;
           case 8: printf("Enter the value of the node to be deleted");
                   scanf("%d",&d);
                   del_node_val(d);
                   break;
           case 9: reverse();
                   break;
           case 10: exit(0);
        }
    }
}

void count_nodes()
{
   int count;
   struct node *q;
   q=start;
   count=0;
   while(q!=NULL)
   {
      count++;
      q=q->next;
    }

  printf("Total number of elements in the list is:%d\n",count);
}

void insert_specific(int p, int num)
{
    struct node *q,*temp;
    int count=0;
    temp=malloc(sizeof(struct node));
    temp->data=num;
    q=start;
    while(count<p-1)
    {
        q=q->next;
        if(q==NULL)
        {
            printf("incorrect position");
            exit(0);
        }
        count++;
    }
    temp->next=q->next;
    q->next=temp;
}

void create_list(int num)
{
  struct node *temp,*q;

  temp=malloc(sizeof(struct node));
  temp->data=num;
  if(start==NULL)
  {
     temp->next=start;
     start=temp;
  }
  else
  {
      q=start;
      while(q->next!=NULL)
        q=q->next;
        temp->next=q->next;
        q->next=temp;

  }
}

void display()
{
    struct node *q;
    q=start;
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->next;
    }


}

void insert_begin(int d)
{
    struct node *temp;

    temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->next=start;
    start=temp;
}

void search(int num)
{
    struct node *q;
    int count,flag;
    q=start;
count=0;
flag=0;
while(q!=NULL)
{
  if(q->data==num)
{
  flag=1;
  break;
}
count++;
q=q->next;
}
if(flag==1)
printf("\nData found in index %d", count);
else
printf("\nData not found found in the list");

}

void del_node(int pos)
{
    struct node *temp,*q;
    int count;
    q=start;
count=0;
while(count<pos-1)
{
q=q->next;
count++;
 }
temp=q->next;
q->next=temp->next;
free(temp);

}

void del_node_val(int val)
{
struct node *temp,*q;
if(start->data==val)
{
 temp=start;
start=start->next;
free(temp);
return;
}
q=start;
while(q->next->next!=NULL)
{
if(q->next->data==val)
{
   temp=q->next;
   q->next=temp->next;
free(temp);
return;
}
q=q->next;
}

if(q->next->data==val)
{
  temp=q->next;
   q->next=temp->next;
free(temp);
return;
}
printf("%d is not present in the list",val);
}

void reverse()
{
    struct node *p1,*p2,*p3;
     p1=start;
    p2=p1->next;
   p3=p2->next;
  p1->next=NULL;
p2->next=p1;
while(p3!=NULL)
{
   p1=p2;
  p2=p3;
p3=p3->next;
p2->next=p1;
}
start=p2;
}
