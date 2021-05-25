#include<stdio.h>
#define MAX 10
int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
int peep(int st[]);
void display(int st[]);

int main(){
    int val,option;
    do{
        printf("\n****MAIN MENU****");
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEP");
        printf("\n4.DISPLAY");
        printf("\n5.EXIT");
        printf("\n*****************");
        printf("\nEnter your option: ");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("\nEnter the number to be pushed on the stack: ");
            scanf("%d",&val);
            push(st,val);
            break;

            case 2:
            val=pop(st);
            if(val!=-1)
            printf("\nThe value deleted from the stack is : %d",val);
            break;

            case 3:
            val = peep(st);
            if(val!=-1)
            printf("\nThe value stored at the top of the stack is : %d",val);
            break;

            case 4:
            display(st);
            break;
        }
    }while(option!=5);
    getch();
    return 0;
}

void push(int st[],int val){
    if(top==MAX-1){
        printf("\nSTACK OVERFLOW");
    }else{
        top++;
        st[top]=val;
    }
}
int pop(int st[]){
    int val;
    if(top==-1){
        printf("\nSTACK OVERFLOW");
        return -1;
    }else{
        val=st[top];
        top--;
        return val;
    }
}
void display(int st[]){
    int i;
    if(top==-1)
    printf("\nSTACK IS EMPTY");
    else{
        for(i=top;i>=0;i--)
        printf("\n%d",st[i]);
    }
}
int peep(int st[]){
    if(top==-1){
        printf("\nSTACK IS EMPTY");
        return -1;
    }else{
        return (st[top]);
    }
}