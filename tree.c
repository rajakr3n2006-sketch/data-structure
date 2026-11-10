#include <stdio.h>
#include <stdlib.h>

#define N 3

struct Node {
    int data;
    struct Node *child[N];
};

struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;

    for (int i = 0; i < N; i++)
        newNode->child[i] = NULL;

    return newNode;
}

void preorder(struct Node *root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);

    for (int i = 0; i < N; i++)
        preorder(root->child[i]);
}

int main() {

    struct Node *root = createNode(1);

    root->child[0] = createNode(2);
    root->child[1] = createNode(3);
    root->child[2] = createNode(4);

    root->child[0]->child[0] = createNode(5);
    root->child[0]->child[1] = createNode(6);

    printf("Preorder Traversal: ");
    preorder(root);

    return 0;
}