#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Global Variables
int CAPACITY = 5;
int Stack[5];
int top = -1;
//Function Declaration
void Push(int ele);
void Pop();
void Peek();
void Traverse();
int isFull();
int isEmpty();

int main(){
    int ch, ele;
    while(1){
        printf("Enter your choice :-\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");

        printf("Your choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1 : printf("Enter element for push : ");
                    scanf("%d",&ele);
                     Push(ele);
                     break;
            case 2 : Pop();
                     break;
            case 3 : Peek();
                     break;
            case 4 : Traverse();
                     break;
            case 5 : exit(0);
            
            default : printf("Invalid Choice :(\n");
        }
        printf("\n");
    }
}
// Function Definition
// Push
void Push(int ele){
    if(isFull()){
        printf("Stack Overflow :(\n");
    }else {
        top++;
        Stack[top] = ele;
        printf("Pushed element : %d\n",ele);
    }
}
// Pop
void Pop(){
    if(isEmpty()){
        printf("Stack Underflow :(\n");
    }else {
        printf("Popped element : %d\n",Stack[top]);
        top--;
    }
}
// Peek
void Peek(){
    printf("Peek element : %d",Stack[top]);
}
// Traverse
void Traverse(){
    if(isEmpty()){
        printf("Stack is empty :(\n");
    }else {
        printf("Stack elements : ");
        for(int i=0; i<=top; i++){
            printf("%d ",Stack[i]);
        }
    }
    printf("\n");
}
// isFull
int isFull(){
    if(top == CAPACITY-1){
        return 1;
    }
    return 0;
}
// isEmpty
int isEmpty(){
    if(top == -1){
        return 1;
    }
    return 0;
}
