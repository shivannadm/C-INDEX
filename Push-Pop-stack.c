#include <stdio.h>
#include <stdlib.h>
int size;

void push(int arr[], int *top)
{
    if (*top == (size - 1))
    {
        printf("Stack is full");
    }
    else
    {
        *top = *top + 1;
        printf("Enter the stack element: ");
        scanf("%d", &arr[*top]);
    }
}

int pop(int arr[], int *top)
{
    int ele;
    if (*top = -1)
    {
        printf("Stack is Empty");
        return -1;
    }
    else
    {
        ele = arr[*top];
        *top = *top - 1;
        return (ele);
    }
}

void peek(int arr[], int top)
{
    if (top == -1)
    {
        printf("stack is full");
    }
    else
    {
        printf("peek element is %d", arr[top]);
    }
}

void display(int arr[], int *top)
{
    int i;
    for (i = 0; i <= *top; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void main()
{
    int i, arr[10], top = -1, ele;
    char choice;
    printf("Enter the stack size: ");
    scanf("%d", &size);
    printf("Enter stack elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[ele]);
    }
    while (1)
    {
        printf("\n1.Push\n2.pop\n3.Display\n4.Peek\n5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%s", &choice);
        switch (choice)
        {
        case '1':
            push(arr, &top);
            break;
        case '2':
            ele = pop(arr, &top);
            if (ele == -1)
                printf("");
            else
                printf("Poped element is %d", ele);
            break;
        case '3':
            display(arr, &top);
            break;
        case '4':
            peek(arr, top);
            break;

        case '5':
            exit(0);
            break;
        default:
            printf("Invalid choice..!");
            break;
        }
    }
}
