#include <stdio.h>
#include <stdlib.h>
int n;

void insert(int arr[])
{
    int i, pos, ele;
    printf("Enter te position to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &ele);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i] = ele;
    n = n + 1;
    printf("\n");
}

void delete(int arr[])
{
    int i, pos;
    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[i] = '\0';
    n = n - 1;
    printf("\n");
}

void display(int arr[])
{
    int i;
    printf("the array elemts are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10], i, choice;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("\n1.Insert\n2.delete\n3.Display\n4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert(arr);
            break;
        case 2:
            delete (arr);
            break;
        case 3:
            display(arr);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice...!");
            break;
        }
    }
}