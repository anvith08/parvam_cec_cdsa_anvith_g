#include <stdio.h>
#define SIZE 4
int stack_arr[SIZE],top=-1;

void push(int data){
    if (top == SIZE -1){
        printf("Stack Overflow\n");
    }
    else{
        top=top+1;
        stack_arr[top]=data;
        printf("%d is pushed into the stack \n",data);
    }
}

void pop(){
    if (top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is popped from the stack \n",stack_arr[top--]);
    }
}

void display(){
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are as follows :  \n");
        for (int i = top; i >=0; i--)
        {
            printf("%d\t",stack_arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice;
    do{
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int data1;
            printf("Enter the data to be pushed : \n");
            scanf("%d",&data1);
            push(data1);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit the menu.\n");
            break;
        default:
            printf("Invalid choice, Please try again.\n");
            break;
        }
    }
    while (choice!=4);
}