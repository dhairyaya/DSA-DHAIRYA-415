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
int getHeight(struct Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}
int countLeaves(struct Node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
        
    return countLeaves(root->left) + countLeaves(root->right);
}
int countTwoChildren(struct Node* root) {
    if (root == NULL)
        return 0;
    
    int count = 0;
    if (root->left != NULL && root->right != NULL)
        count = 1;
        
    return count + countTwoChildren(root->left) + countTwoChildren(root->right);
}
int countNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
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
        if (left != -1) nodes[i]->left = nodes[left];

        printf("Right child index of node %d (-1 if none): ", i);
        scanf("%d", &right);
        if (right != -1) nodes[i]->right = nodes[right];
    }
    struct Node* root = nodes[0];
    int choice;
    while (1) {
        printf("\n\n--- BINARY TREE STATISTICS ---\n");
        printf("1. Calculate Height\n");
        printf("2. Count Leaf Nodes\n");
        printf("3. Count Nodes with Two Children\n");
        printf("4. Count Total Nodes\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\nResult: "); 
        switch (choice) {
            case 1:
                printf("%d", getHeight(root));
                break;
            case 2:
                printf("%d", countLeaves(root));
                break;
            case 3:
                printf("%d", countTwoChildren(root));
                break;
            case 4:
                printf("%d", countNodes(root));
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.");
        }
    }
    return 0;
}