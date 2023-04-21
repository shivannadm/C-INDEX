#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void insert();
void delete();
void display();

int ele, arr[MAX];
int rear = -1;
int front = -1;

void insert()
{
    int ele;
    if (rear == MAX - 1)
    {
        printf("Q is full ...!");
        return;
    }
    else
    {
        if (front == -1)
            front = 0;
        {
            printf("Insert the element in Q: ");
            scanf("%d", &ele);
            rear = rear + 1;
            arr[rear] = ele;
        }
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Q is under flow...!");
        return;
    }
    else
    {
        printf("deleted element is %d\n", arr[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Q is empty\n");
    }
    else
    {
        printf("Q is: ");
        for (i = front; i < rear; i++)
            printf("%d\n", arr[i]);
        printf("\n");
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)

        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choise...!");
        }
    }
}