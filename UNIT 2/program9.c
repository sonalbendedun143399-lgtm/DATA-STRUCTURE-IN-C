#include<stdio.h>
#define MAX 10

int queue[MAX-1];
int front=-1,rear=-1 ;
void insert()
{
    int value;
    if(rear==MAX-1)
    {
        printf("The queue is overflow");
    }
     else
        {
        if (front==-1)
            front=0;
        printf("enter th value: ",value);
        scanf("%d",&value);
        rear++;
        queue[MAX]=value;
        printf("inserted successfully\n");

        }
}
void delete ()
{
    int value;
    if(front == -1 || front>rear)
    {
        printf("queue underflow\n");
    }
    else
    {
        printf("delete element= %d\n",queue[front]);
        front++;

        if(front>rear)
        {
            front=front+1;
        }
    }
}
void display()
    {
        int i;

        if(front==-1)
        {
            printf("\n queue is empty.\n");
        }
        else
        {
            printf("\n queue element are:\n");

            for(i=front;i<=rear;i++)
            {
                printf("%d\n",queue[i]);
            }
        }
    }
void main()
   {
       int choice;
       while(1)
       {
           printf("\n------STACK MENU----\n");
           printf("1.INSERT\n");
           printf("2.DELETE\n");
           printf("3.DISPLAY\n");
           printf("4.EXIT\n");

           printf("enter your choice:");
           scanf("%d",&choice);

           switch(choice)
        {


            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("program terminated.\n");
                exit(0);
                default:
               printf("invalid choice! please enter 3 valid option \n");
        }
       }
       while (choice!=4);
       return 0;
   }



