
//  Traversing of Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

typedef struct node NODE;

NODE *getnode(int data)
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return (newnode);
}

NODE *insertlevelorder(int arr[], int i, int n)
{
    NODE *root = NULL;
    if (i < n)
    {
        root = getnode(1);
        root->left = insertlevelorder(arr, 2 * i + 1, n);
        root->right = insertlevelorder(arr, 2 * i + 2, n);
    }
    return root;
}

void innorder(struct node *root)
{
    if (root != NULL)
    {
        innorder(root->left);
        printf("%d", root->data);
        innorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    NODE *root = insertlevelorder(arr, 0, n);
    printf("\n");
    innorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
}
