#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* Createnode(int data){
    struct Node*n;
    n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    // here data on the rhs is the data taken when calling the function
    //basically we're setting the data of n to the data entered
    n->left = NULL;
    n->right = NULL;
    //setting the right and left children as null
    return n;
}

struct Node*preorder(struct Node* root){
    if (root!=NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct Node*postorder(struct Node* root){
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    struct Node* node1 = Createnode(10);
    struct Node* node2 = Createnode(8);
    struct Node* node3 = Createnode(12);
    struct Node* node4 = Createnode(7);
    struct Node* node5 = Createnode(5);

    //here node1 is the root node
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node4-> left = node5;

    printf("preorder data: ");
    preorder(node1);
    printf("\n");
    printf("postorder data: ");
    postorder(node1);
    //so the tree looks like this
/*
    Finally The tree looks like this:
         10
        / \
       8   12
      / 
     7 
    / 
   5   
*/
    return 0;
}