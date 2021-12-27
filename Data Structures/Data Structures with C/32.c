//Program to create a binary search tree
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create_tree(struct node *);
void preOrderTraversal(struct node *);
void inOrderTraversal(struct node *);
void postOrderTraversal(struct node *);
struct node *findSmallestElement(struct node *);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
struct node *mirrorImage(struct node *);
int totalExternalNodes(struct node *);
int totalInternalNodes(struct node *);
int Height(struct node *);
struct node *deleteTree(struct node *);
int main()
{
    int option, val;
    struct node *ptr;
    create_tree(tree);
    do
    {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Postorder Traversal");
        printf("\n 5. Find the smallest element");
        printf("\n 6. Find the largest element");
        printf("\n 7. Delete an element");
        printf("\n 8. Count the total number of nodes");
        printf("\n 9. Count the total number of external nodes");
        printf("\n 10. Count the total number of internal nodes");
        printf("\n 11. Determine the height of the tree");
        printf("\n 12. Find the mirror image of the tree");
        printf("\n 13. Delete the tree");
        printf("\n 14. Exit");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &val);
            tree = insertElement(tree, val);
            break;
        case 2:
            printf("\n The elements of the tree are : \n");
            preorderTraversal(tree);
            break;
        case 3:
            printf("\n The elements of the tree are : \n");
            inorderTraversal(tree);
            break;
        case 4:
            printf("\n The elements of the tree are : \n");
            postorderTraversal(tree);
            break;
        case 5:
            ptr = findSmallestElement(tree);
            printf("\n Smallest element is :%d", ptr->data);
            break;
        case 6:
            ptr = findLargestElement(tree);
            printf("\n Largest element is : %d", ptr->data);
            break;
        case 7:
            printf("\n Enter the element to be deleted : ");
            scanf("%d", &val);
            tree = deleteElement(tree, val);
            break;
        case 8:
            printf("\n Total no. of nodes = %d", totalNodes(tree));
            break;
        case 9:
            printf("\n Total no. of external nodes = %d", totalExternalNodes(tree));
            break;
        case 10:
            printf("\n Total no. of internal nodes = %d", totalInternalNodes(tree));
            break;
        case 11:
            printf("\n The height of the tree = %d", Height(tree));
            break;
        case 12:
            tree = mirrorImage(tree);
            break;
        case 13:
            tree = deleteTree(tree);
            break;
        }
    } while (option != 14);
    return 0;
}
void create_tree(struct node *tree)
{
    tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    return tree;
}