#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*last=NULL;

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
        /*printf("press 9 to reverse the list:\n");*/
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
           case 8: printf("Enter the value of the node to be deleted");
                   scanf("%d",&d);
                   del_node_val(d);
                   break;
           case 5: count_nodes();
                    break;

           /*case 6: printf("Enter the value of the search element");
                   scanf("%d",&d);
                   search(d);
                   break;*/
           case 7: printf("Enter the position of the node to be deleted");
                   scanf("%d",&d);
                   del_node(d);
                   break;
           /*case 8: printf("Enter the value of the node to be deleted");
                   scanf("%d",&d);
                   del_node_val(d);
                   break;*/
           /*case 9: reverse();
                   break;*/
           case 10: exit(0);
        }
    }
}

void create_list(int d)
{
struct node *temp;
temp=malloc(sizeof(struct node));
temp->data=d;
if(last==NULL)
{
   temp->next=temp;
}
else
{
temp->next=last->next;
last->next=temp;
}
last=temp;
}
void display()
{
    struct node *q;
    if(last==NULL)
    {
        printf("empty list");
        return;
    }
    q=last->next;
    while(q!=last)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("%d ",q->data);
}
void insert_begin(int d)
{
 struct node *temp,*q;
temp=malloc(sizeof(struct node));
  temp->data=d;
q=last->next;
 last->next=temp;
temp->next=q;
}

void insert_specific (int pos, int d)
{
 struct node *temp,*q;
int c=1;
temp=malloc(sizeof(struct node));
  temp->data=d;
q=last->next;
while(c<pos)
{
   q=q->next;
c++;
}
temp->next=q->next;
q->next=temp;
if(q==last)
    last=temp;
}


void del_node_val (int d)
{
    struct node *q, *temp;
  if (last->data==d && last->next==last)
{
    temp=last;
    free(temp);
    last=NULL;
   return;
}
q=last->next;
if(q->data==d)
{
  temp=q;
last->next=q->next;
free (temp);
return;
}
while(q->next->next!=last->next)
{
   if(q->next->data==d)
{
   temp=q->next;
  q->next=temp->next;
free (temp);
return;
}
q=q->next;
}
if(q->next->data==d)
{
  temp=q->next;
q->next=temp->next;
last=q;
free(temp);
return;
}
printf("search element %d is not found in the list",d);
}

void count_nodes()
{
    struct node *q;
    int count=1;
    if(last==NULL)
    {
        printf("list is empty");
        return;
    }
    q=last->next;
    while(q!=last)
    {
        count++;
        q=q->next;
    }
    printf("%d elements are in the list\n",count);
}

void del_node(int pos)
{
  struct node *q,*temp;
  int c=1;

  q=last->next;
  if(pos==1)
  {
      temp=q;
      last->next=q->next;
      free(temp);
      return;
  }



   while(c<pos-1)
   {
       q=q->next;
       c++;
       if(q==last)
       {
           printf("Try again with proper position value");
           return;
       }
   }
   temp=q->next;
   q->next=temp->next;
   if(q->next==last->next)
    last=q;
   free(temp);
}
