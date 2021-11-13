#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *); 
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

int main(int argc, char *argv[])
{
    int option;
    do
    {
        printf("\nMain Menu");
        printf("\n1.Create a list");
        printf("\n2.Display the list");
        printf("\n3.Add a node at the begining");
        printf("\n4.Add a node at the end");
        printf("\n5.Add a node before a given node");
        printf("\n6.Add a node after a given node");
        printf("\n7.Delete a node from the beginning");
        printf("\n8.Delete a node from the end");
        printf("\n9.Delete a given node");
        printf("\n10.Delete a node after a given node");
        printf("\n11.Delete the entire list");
        printf("\n12.Sort the list");
        printf("\n13.EXIT");
        printf("\nEnter your option");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("\nLINKED LIST IS CREATED");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_beg(start);
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = insert_before(start);
            break;
        case 6:
            start = insert_after(start);
            break;
        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = delete_node(start);
            break;
        case 10:
            start = delete_after(start);
            break;
        case 11:
            start = delete_list(start);
            printf("\nLINKED LIST DELETED");
            break;
        case 12:
            start = sort_list(start);
            break;
        }
    } while (option != 13);
    getch();
    return 0;
}
struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data:");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\nEnter the data : ");
        scanf("%d", &num);
    }
    return start;
}