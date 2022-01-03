//Q6: Addition of 2 polynomials using linked list.
#include<stdio.h>
#include<stdlib.h>
struct node
{
float co;
int ex;
struct node *next;
};//*start;
struct node *enter(struct node *start)
{
float co;
int n,i,ex;
struct node *add_node(struct node *,float,int);
printf("Enter the number of terms:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the coefficient and exponent values:");
    scanf("%f%d",&co,&ex);
    start=add_node(start,co,ex);
}
return(start);

}

struct node *add_node(struct node *start,float co,int ex)
{
struct node *temp,*q;
temp=malloc(sizeof(struct node));
temp->co=co;
temp->ex=ex;
if(start==NULL || start->ex<ex)
{
  temp->next=start;
  start=temp;
}
else
{
q=start;
while(q->next!=NULL && q->next->ex>ex)
q=q->next;
 temp->next=q->next;
 q->next=temp;
}

return(start);
}
void display(struct node *p)
{
struct node *q;
q=p;
while(q!=NULL)
{
if(q->co>0&&q==p)
printf("%fx^%d",q->co,q->ex);
else if(q->co>0&&q!=p)
printf("+%fx^%d",q->co,q->ex);
else
printf("%fx^%d",q->co,q->ex);
printf("%fx^%d+",q->co,q->ex);
q=q->next;
}
printf("%fx^%d\n",q->co,q->ex);
printf("\n");
}
struct node * add(struct node *p1,struct node *p2)
{
 struct node *p3_start,*p3,*temp;
 p3_start=NULL;
 if(p1==NULL && p2==NULL)
  return p3_start;
 else
 {
    while(p1!=NULL && p2!=NULL)
    {
        temp=malloc(sizeof(struct node));
        if(p3_start==NULL)
        {
          p3_start=temp;
          p3=p3_start;
        }
        else
        {
            p3->next=temp;
            p3=p3->next;

        }
        if(p1->ex>p2->ex)
        {
            p3->co=p1->co;
            p3->ex=p1->ex;
            p1=p1->next;
        }
        else
        {
            if(p1->ex<p2->ex)
            {
                p3->co=p2->co;
                p3->ex=p2->ex;
                p2=p2->next;
            }
            else
            {
               p3->co=p1->co+p2->co;
               p3->ex=p1->ex;
               p1=p1->next;
               p2=p2->next;
            }
        }
    }
 }
  while(p1!=NULL)
  {
      temp=malloc(sizeof(struct node));
        if(p3_start==NULL)
        {
          p3_start=temp;
          p3=p3_start;
        }
        else
        {
            p3->next=temp;
            p3=p3->next;
        }
        p3->co=p1->co;
        p3->ex=p1->ex;
        p1=p1->next;

  }
  while(p2!=NULL)
  {
      temp=malloc(sizeof(struct node));
        if(p3_start==NULL)
        {
          p3_start=temp;
          p3=p3_start;
        }
        else
        {
            p3->next=temp;
            p3=p3->next;
        }
        p3->co=p2->co;
        p3->ex=p2->ex;
        p1=p2->next;

  }
  p3->next=NULL;
  return(p3_start);

}
main()
{
struct node *p1_start,*p2_start,*p4_start;
struct node *enter(struct node *);
struct node *add(struct node *,struct node *);
//start=NULL;
p1_start=NULL;
p2_start=NULL;
p4_start=NULL;
p1_start=enter(p1_start);
p2_start=enter(p2_start);
display(p1_start);
display(p2_start);
p4_start=add(p1_start,p2_start);
display(p4_start);
//getch();
return 0;
}
