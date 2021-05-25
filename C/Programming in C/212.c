#include<stdio.h>
#include<malloc.h>
struct node{
    char vertex;
    struct node *next;
};
struct node *gnode;
void displayGraph(struct node *adj[],int no_of_nodes);
void deleteGraph(struct node *adj[],int no_of_nodes);
void createGraph(struct node *adj[],int no_of_nodes);
int main(){
    struct node *adj[10];
    int i,no_of_nodes;
    printf("\nEnter the number of nodes in G: ");
    scanf("%d",&no_of_nodes);
    for(i=0;i<no_of_nodes;i++)
    adj[i]=NULL;
    createGraph(adj,no_of_nodes);
    printf("\nThe graph is: ");
    displayGraph(adj,no_of_nodes);
    deleteGraph(adj,no_of_nodes);
    getch();
    return 0;
}

void createGraph(struct node *adj[],int no_of_nodes){
    struct node *new_node,*last;
    int i,j,n,val;
    for(i=0;i<no_of_nodes;i++){
        last=NULL;
        printf("\nEnter the number of neighbour of %d: ",i);
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            printf("\nEnter the neighbour of %d of %d: ",j,i);
            scanf("%d",&val);
            new_node=(struct node *)malloc(sizeof(struct node));
            new_node->vertex=val;
            new_node->next=NULL;
            if(adj[i]==NULL)
            adj[i]=new_node;
            else
            last->next=new_node;
            last=new_node;
        }
    }
}
void displayGraph(struct node *adj[],int no_of_nodes){
    struct node *ptr;
    int i;
    for(i=0;i<no_of_nodes;i++){
        ptr=adj[i];
        printf("\nThe neighbour of node %d are: ",i);
        while(ptr!=NULL){
            printf("\t%d",ptr->vertex);
            ptr=ptr->next;
        }
    }
}
void deleteGraph(struct node *adj[],int no_of_nodes){
    int i;
    struct node *temp,*ptr;
    for(i=0;i<no_of_nodes;i++){
        ptr=adj[i];
        while(ptr!=NULL){
            temp=ptr;
            ptr=ptr->next;
            free(temp);
        }
        adj[i]=NULL;
    }
}