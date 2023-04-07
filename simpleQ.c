#include <stdio.h>
#include <stdlib.h>
void insert(int queue[], int *rear, int size)
{
    int element;
    printf("\nEnter the new element ");
    scanf("%d", &element);
    if (*rear != size - 1)
    {
        *rear = *rear + 1;
        queue[*rear] = element;
    }
    else
        printf("\nQueue is full");
}

int delete(int queue[], int *rear, int *front)
{
    if (*rear < *rear)
    {
        printf("\nQueue is empty ");
    }
    else
    {
        int element = queue[*front];
        printf("\nThe  deleted element is %d ", element);
        front = front + 1;
    }
}
void display(int queue[], int rear, int front)
{
    printf("Display simple queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t", queue[i]);
    }
}
int main()
{
    int queue[20], rear = -1, front = 0;
    int size, choice;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    while (1)
    {
        printf("\n 1.insert an element \n 2.Delete an element \n 3.Display the element \n 4.Exit \n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        { //
        case 1:
            insert(queue, &rear, size);
            break;
        case 2:
            delete (queue, &rear, &front);
            break;
        case 3:
            display(queue, rear, front);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("invalid input");
        }
    }
    return 0;
}
