#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *start = NULL;


void insert_begin()
{
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;

    printf("Node inserted at beginning.\n");
}
void insert_after()
{
    struct Node *newnode,*ptr,*preptr;

    int val;

    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);

    printf("enter value after which want to insert\n");
    scanf("%d",&val);
    ptr=start;

    while (ptr !=NULL && ptr->data!=val)
    {

        ptr=ptr->next;
    }
     if(newnode == NULL)
    {
        printf("node %d not found\n");
    }
    newnode->next= ptr -> next;
    ptr->next =newnode;
    printf("Node inserted successfully.\n");
}

void insert_befor()
{
    struct Node *newnode,*ptr,*preptr;

    int val,num;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    if(newnode == NULL)
    {
        printf("overflow\n");
    }


    printf("enter value to insert\n");
    scanf("%d",&val);
    newnode->data =val;

    printf("enter the value befor which you want to insert: ");
    scanf("%d",&num);

    ptr=start;

    if(ptr != NULL && ptr->data == num);
    {
        newnode->next=ptr;
        start=newnode;

        printf("node inserted before %d.\n",num);
    }

    preptr=ptr;

     while (ptr !=NULL && ptr->data!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }

    if(ptr ==NULL)
    {
        printf("node %d not found \n",num);
        free(newnode);
    }

    preptr->next=newnode;
    newnode-> next = ptr;
    printf("Node inserted  before successfully.\n");
}



void insert_end()
{
    struct Node *newnode, *ptr;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        ptr = start;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }

    printf("Node inserted at end.\n");
}


void display()
{
    struct Node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    ptr = start;

    printf("Linked List: ");

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n----- Singly Linked List -----\n");
        printf("1. Insert at beginning\n");
        printf("2.Insert at after \n");
        printf("3. Insert at before\n");
        printf("4. insert end\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert_begin();
                break;


            case 2:
                insert_after();
                break;


            case 3:
                insert_befor();
                break;

            case 4:
                insert_end();
                break;


            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Wrong choice!\n");
        }
    }

    return 0;
}
