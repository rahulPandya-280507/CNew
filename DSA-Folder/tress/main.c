#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data);
void preOrder(struct Node *root);
void postOrder(struct Node *root);
void inOrder(struct Node *root);

int main()
{
    /*
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;
    struct Node *p1;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->left = NULL;
    p1->right = NULL;
    struct Node *p2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;
    p->left = p1;
    p->right = p2;
    return 0;
    */
    // constructing new node using function
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preorder
    printf("Preorder: \n ");
    preOrder(p);

    // postorder
    printf("\nPostorder: \n");
    postOrder(p);

    // Inorder
    printf("\nInorder: \n");
    inOrder(p);
}

struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct Node *root) {
    if(root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}