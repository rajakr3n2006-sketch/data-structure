#include <stdio.h>
#include <stdlib.h>

struct NaryNode {
    int data;
    struct NaryNode *child[3];
};

struct BinaryNode {
    int data;
    struct BinaryNode *left;
    struct BinaryNode *right;
};

struct BinaryNode* convert(struct NaryNode *root) {
    if (root == NULL)
        return NULL;

    struct BinaryNode *broot =
        (struct BinaryNode*)malloc(sizeof(struct BinaryNode));

    broot->data = root->data;
    broot->left = NULL;
    broot->right = NULL;

    struct BinaryNode *prev = NULL;

    for (int i = 0; i < 3; i++) {

        if (root->child[i] != NULL) {

            struct BinaryNode *child =
                convert(root->child[i]);

            if (i == 0) {
                broot->left = child;
            }
            else {
                prev->right = child;
            }

            prev = child;
        }
    }

    return broot;
}