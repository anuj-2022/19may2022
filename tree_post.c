#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

//return a new node with the given value
struct node *getNode(int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));

    newNode->data   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

//inserts nodes in the binary search tree
struct node *insertNode(struct node *root, int val)
{
     if(root == NULL)
         return getNode(val);

     if(root->data < val)
         root->right = insertNode(root->right,val);

     if(root->data > val)
         root->left = insertNode(root->left,val);

     return root;
}

//postorder traversal of the binary search tree
void postorder(struct node *root)
{
    if(root == NULL)
        return;

    //traverse the left subtree
    postorder(root->left);

    //traverse the right subtree
    postorder(root->right);

    //visit the root
    printf("%d ",root->data);
}

int main()
{
   struct node *root = NULL;

   root = insertNode(root,100);
   root = insertNode(root, 40);
   root = insertNode(root, 200);
   root = insertNode(root, 20);
   root = insertNode(root, 70);
   root = insertNode(root, 160);
   root = insertNode(root, 400);
   printf("\nPost order data is :\n");
   postorder(root);
   printf("\n");
   return 0;
}
