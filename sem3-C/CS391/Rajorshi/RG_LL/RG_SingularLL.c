#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void main()
{
    int choice;
    struct node *create_node(int);
    void create_list();
    void display_list();
    void add_after();
    void add_before();
    void del_node_val();
    void del_node_pos();
    void display_rev(struct node *);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create the list");
        printf("\n2 to display the list");
        printf("\n3 to add node after a specific node");
        printf("\n4 to add node before a specific node");
        printf("\n5 to delete a node with specific value");
        printf("\n6 to delete a node from a specific position");
        printf("\n7 to display the list in reverse\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            create_list();
            break;

        case 2:
            display_list();
            break;

        case 3:
            add_after();
            break;

        case 4:
            add_before();
            break;

        case 5:
            del_node_val();
            break;

        case 6:
            del_node_pos();
            break;

        case 7:
            display_rev(head);
            printf("\n");
            break;

        default:
            printf("Sorry fam try again");
        }
    }
}

struct node *create_node(int v)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->val = v;
    return temp;
}

void create_list()
{
    int n, v, i;
    printf("\nHow many nodes would you like to add?: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of the node: ");
        scanf("%d", &v);
        struct node *temp;
        temp = create_node(v);
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            last->next = temp;
        }
        last = temp;
    }
}

void display_list()
{
    struct node *temp;
    temp = head;
    printf("\nThe current list is: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void add_after()
{
    int v, x;
    struct node *temp, *new;
    temp = head;
    printf("\nEnter the value of the node after which to be added: ");
    scanf("%d", &x);
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            printf("Enter the value of the new node: ");
            scanf("%d", &v);
            new = create_node(v);
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }
    printf("Element not found.");
}

void add_before()
{
    int v, x;
    struct node *temp, *new;
    temp = head;
    printf("\nEnter the value of the node before which to be added: ");
    scanf("%d", &x);
    printf("Enter the value of the new node: ");
    scanf("%d", &v);
    new = create_node(v);
    if (head->val == x)
    {
        new->next = head;
        head = new;
        return;
    }
    while (temp->next != NULL)
    {
        if (temp->next->val == x)
        {
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }
    printf("Element not found.");
}

//felt like doing with for loop from here

void del_node_val()
{
    int x;
    struct node *temp;
    printf("Enter the value of the node to be deleted: ");
    scanf("%d", &x);
    if (head->val == x)
    {
        head = head->next;
        return;
    }
    for (temp = head; temp->next != NULL; temp = temp->next)
    {
        if (temp->next->val == x)
        {
            temp->next = temp->next->next; //isn't working with last node
            // return;                     //works with this but then will only delete the first node it will match.
        }
    }
}

void del_node_pos()
{
    int p, i = 1;
    struct node *temp;
    printf("Enter the position of the node to be deleted: ");
    scanf("%d", &p);
    if (p == 1)
    {
        head = head->next;
        return;
    }
    for (temp = head; i < p; i++)
    {
        if (i == p - 1)
        {
            temp->next = temp->next->next;
            return;
        }
        temp = temp->next;
    }
}

void display_rev(struct node *temp)
{
    if (temp == NULL)
    {
        printf("\nThe list in reverse is: NULL");
        return;
    }
    display_rev(temp->next);
    printf(" <- %d", temp->val);
}