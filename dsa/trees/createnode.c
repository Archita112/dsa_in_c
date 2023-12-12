//I have copied this code from cwh as this sort of is like a template of how to create a node
//and add different nodes into it
//in preorder.c i've created the the createnode function on my own undertanding the basic 
//concepts of how to create a node and allocate it the memory

#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node *n; // creating a node pointer
    n = (struct Node *) malloc(sizeof(struct Node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);
    /*
    Finally The tree looks like this:
         5
        / \
       3   6
      / \
     1   4  
    */
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // struct Node* n = search(p, 10);
    // if(n!=NULL){
    // printf("Found: %d", n->data);
    // }
    // else{
    //     printf("Element not found");
    // }
    return 0;
}