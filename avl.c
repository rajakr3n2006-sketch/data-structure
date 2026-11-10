#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

// Get height of node
int height(struct Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// Get maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Create a new node
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

// Right rotation
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

// Left rotation
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

// Get balance factor
int getBalance(struct Node* N) {
    if (N == NULL)
        return 0;

    return height(N->left) - height(N->right);
}

// Insert node in AVL tree
struct Node* insert(struct Node* node, int key) {

    // Normal BST insertion
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    // Update height
    node->height = 1 + max(height(node->left),
                           height(node->right));

    // Calculate balance factor
    int balance = getBalance(node);

    // LL Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // RR Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // LR Case
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // RL Case
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

// Preorder traversal
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {

    struct Node* root = NULL;
    int n, key, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &key);
        root = insert(root, key);
    }

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    return 0;
}