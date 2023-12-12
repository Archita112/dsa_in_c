//we will do deletion of trees in three ways
//case1: deletion of tree with one children
//case2: deletion of tree with two children
//case3: deletion of tree with no children

#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* Search(struct Node* root, int key){
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return Search(root->left, key);
    }
    else{
        return Search(root->right, key);
    }
}

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

struct Node*inorder(struct Node* root){
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
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

struct Node* inOrderPredecessor(struct Node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node* deletingkey(struct Node*root, int key){
    struct Node* iPree;

    if (root == NULL)
    {
        return NULL;
    }
    else if(root->left == NULL && root->right ==NULL){
        free(root);
        return NULL;
    }
    
    //key is the value to be deleted
    if (key < root->data)
    {
        root->left = deletingkey(root->left, key);
    }
    else if(key > root->data){
        root->right = deletingkey(root->right, key);
    }
    else{
        iPree = inOrderPredecessor(root);
        root->data = iPree->data;
        root->left = deletingkey(root->left, iPree->data);
    }
    
    return root;
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
    printf("\n");
    printf("inorder data: ");
    inorder(node1);
    printf("\n");
    struct Node* target = Search(node1, 2);
    if (target!=NULL)
    {
        printf("Target found: %d", target->data);
    }
    else{
        printf("No such target found");
    }
    printf("\n");
    deletingkey(node1, 5);
    printf("Target element deleted successfully!\n");
    printf("inorder data: ");
    inorder(node1);
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