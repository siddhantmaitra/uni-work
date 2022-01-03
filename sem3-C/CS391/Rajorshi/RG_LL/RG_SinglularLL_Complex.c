#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};
struct node *head[3] = {NULL, NULL, NULL};
struct node *last[3] = {NULL, NULL, NULL};

void main()
{
    int choice, i;
    char option;
    struct node *create_node(int);
    void create_list(int);
    void display_list(int);
    void create_sorted_list(int);
    void bubble_sort(int);
    void merge_lists();
    void split_lists();

    printf("Would you like to work with two lists?(y/n): ");
    scanf("%c", &option);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create list/s");
        printf("\n2 to create sorted list/s");
        printf("\n3 to display the list/s");
        printf("\n4 to bubble sort the list/s");
        printf("\n5 to merge the sorted lists");
        printf("\n6 to split the list(Odd & Even wise)\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            if (option == 'y')
            {
                printf("\nFor the FIRST LIST:\n");
                create_list(0);
                printf("\nFor the SECOND LIST:\n");
                create_list(1);
            }
            else if (option == 'n')
            {
                create_list(0);
            }
            break;

        case 2:
            if (option == 'y')
            {
                printf("\nFor the FIRST LIST:\n");
                create_sorted_list(0);
                printf("\nFor the SECOND LIST:\n");
                create_sorted_list(1);
            }
            else if (option == 'n')
            {
                create_sorted_list(0);
            }
            break;

        case 3:
            for (i = 0; i < 3; i++)
            {
                printf("\nThe list number %d \n", i + 1);
                display_list(i);
            }
            break;

        case 4:
            for (i = 0; i < 3; i++)
            {
                bubble_sort(i);
            }
            break;

        case 5:
            merge_lists();
            break;

        case 6:
            split_lists();
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

void create_list(int r)
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
        if (head[r] == NULL)
        {
            head[r] = temp;
        }
        else
        {
            last[r]->next = temp;
        }
        last[r] = temp;
    }
}

void create_sorted_list(int r)
{
    int n, v, i;
    printf("\nHow many nodes would you like to add?: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of the node: ");
        scanf("%d", &v);
        struct node *temp, *new;
        new = create_node(v);
        if (head[r] == NULL)
        {
            new->next = NULL;
            head[r] = new;
            last[r] = new;
        }
        else if (v <= head[r]->val)
        {
            new->next = head[r];
            head[r] = new;
        }
        else if (v >= last[r]->val)
        {
            new->next = last[r]->next;
            last[r]->next = new;
            last[r] = new;
        }
        else
        {
            for (temp = head[r]; temp != NULL; temp = temp->next)
            {
                if (v > temp->val && v <= temp->next->val)
                {
                    new->next = temp->next;
                    temp->next = new;
                }
            }
        }
    }
}

void display_list(int r)
{
    struct node *temp;
    temp = head[r];
    printf("\nThe current list is: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void bubble_sort(int r)
{
    struct node *temp[2];
    int v_temp;
    if (head[r] == NULL)
    {
        return;
    }
    for (temp[0] = head[r]; temp[0]->next != NULL; temp[0] = temp[0]->next)
    {
        for (temp[1] = head[r]; temp[1]->next != NULL; temp[1] = temp[1]->next)
        {
            if (temp[1]->val > temp[1]->next->val)
            {
                v_temp = temp[1]->val;
                temp[1]->val = temp[1]->next->val;
                temp[1]->next->val = v_temp;
            }
        }
    }
}

void merge_lists()
{
    struct node *temp[2];
    for (temp[0] = head[0], temp[1] = head[1]; temp[0] != NULL && temp[1] != NULL;)
    {
        if (temp[0]->val < temp[1]->val)
        {
            if (head[2] == NULL)
            {
                head[2] = temp[0];
            }
            else
            {
                last[2]->next = temp[0];
            }
            last[2] = temp[0];
            temp[0] = temp[0]->next;
        }
        else
        {
            if (head[2] == NULL)
            {
                head[2] = temp[1];
            }
            else
            {
                last[2]->next = temp[1];
            }
            last[2] = temp[1];
            temp[1] = temp[1]->next;
        }
    }
    if (temp[0] != NULL)
    {
        last[2]->next = temp[0];
        last[2] = last[0];
    }
    if (temp[1] != NULL)
    {
        last[2]->next = temp[1];
        last[2] = last[1];
    }
}

void split_lists()
{
    struct node *temp;
    for (temp = head[0]; temp != NULL; temp = temp->next)
    {
        if (temp->val % 2 != 0)
        {
            if (head[1] == NULL)
            {
                head[1] = temp;
            }
            else
            {
                last[1]->next = temp;
            }
            last[1] = temp;
        }
        else
        {
            if (head[2] == NULL)
            {
                head[2] = temp;
            }
            else
            {
                last[2]->next = temp;
            }
            last[2] = temp;
        }
    }
    last[1]->next = NULL;
    last[2]->next = NULL;
}