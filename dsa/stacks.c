//stacks

//operations of stack-
/*
push - to add an element in the stack
pop - to remove the element from the stack
peek - to print the element of the stack

// methods to perform
isEmpty - tells us whether the stack is empty or not
isfull - tells us whether it is full or not
count - returns the total number of elements of a stack
*/

#include<stdio.h>
#define max 5

int stack[max];
int top = -1;

//pushing items in a stack
void pushing_elements(int item){
    if (top >= max-1)
    {
        printf("Stack overflow");
    }
    else{
        top++;
        stack[top] = item;
        printf("%d item successfully pushed in the stack\n", item);
    }
}

//for removing elements from a stack
void popping_elements(int item){
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else{
        stack[top] = item;
        top--;
        printf("%d item removed successfully!\n", item);
    }
}

//for printing the elements of stack
void printStack(){
    if (top == -1) {
        printf("Stack is empty\n");
    } 
    else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    pushing_elements(3);

    pushing_elements(5);

    // printStack();

    popping_elements(5);

    printStack();
    return 0;
}