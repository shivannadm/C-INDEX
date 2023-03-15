#include <stdio.h>
#include <stdlib.h>

void crete(int arr[], int n)
{
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    int i;
    printf("array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int n, arr[10], count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int choice;
    while (1)
    {

        printf("\n1.Crete\n2.Display\n3.exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            crete(arr, n);
            count++;
            break;
        case 2:
            if (count != 0)
                display(arr, n);
            else
                printf("Array not crete");
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice...!");
            break;
        }
    }
}