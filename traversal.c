#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data){
    struct Node* newNode=  (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
}

void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
        
    }
}
void preorder(struct Node* root){
    if(root!=NULL){
     printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
             printf("%d",root->data);
    }
}
int countLeaf(struct Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeaf(root->left) +
           countLeaf(root->right);
}
int height(struct Node* root){
    if(root==NULL)
    return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
      if (leftHeight > rightHeight)
    return leftHeight+1;
     else
        return rightHeight + 1;

}
int main(){
    struct Node* root;
    root=createNode(1);
    root->left=createNode(2);
       root->right=createNode(3);
      root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->right->left = createNode(6);
    root->right->right = createNode(7); 
     printf("\nIn-order Traversal: ");
    inorder(root);

    printf("\nPre-order Traversal: ");
    preorder(root);

    printf("\nPost-order Traversal: ");
    postorder(root);

    printf("\nNumber of Leaf Nodes: %d", countLeaf(root));
  printf("\nHeight of Tree: %d", height(root));
  return 0;
    
}

