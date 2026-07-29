#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int value) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void inorder(struct Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct Node* root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    struct Node* nodes[n];
    for (int i = 0; i < n; i++) {
        int value;
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        nodes[i] = createNode(value);
    }
    for (int i = 0; i < n; i++) {
        int left, right;

        printf("Left child index of node %d (-1 if none): ", i);
        scanf("%d", &left);
        if (left != -1)
            nodes[i]->left = nodes[left];

        printf("Right child index of node %d (-1 if none): ", i);
        scanf("%d", &right);
        if (right != -1)
            nodes[i]->right = nodes[right];
    }
    struct Node* root = nodes[0];
    int choice;
    printf("\nChoose traversal\n");
    printf("1. Inorder\n");
    printf("2. Preorder\n");
    printf("3. Postorder\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Inorder: ");
        inorder(root);
    } else if (choice == 2) {
        printf("Preorder: ");
        preorder(root);
    } else if (choice == 3) {
        printf("Postorder: ");
        postorder(root);
    } else {
        printf("Invalid choice");
    }
    return 0;
}
