#include <stdio.h>
#include <stdlib.h> 
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertionAtBegin(struct Node *head, int x)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    ptr->data = x;
    ptr->next = head;
    return ptr; 
}

struct Node *insertionAfterNode(struct Node *head, int key, int x)
{
    struct Node *p = head;
    while (p != NULL && p->data != key)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        printf("Key (%d) not found. Insertion failed.\n", key);
        return head;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    ptr->data = x;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertionAtEnd(struct Node *head, int x)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    ptr->data = x;
    ptr->next = NULL;

    if (head == NULL)
    {
        return ptr;
    }

    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    return head;
}

struct Node *deleteAtBegin(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }
    
    struct Node *ptr = head;
    head = head->next;
    printf("The deleted element is %d\n", ptr->data); 
    free(ptr);
    return head;
}

struct Node *deleteAfterNode(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = NULL;
    while (p != NULL && p->data != value)
    {
        p = p->next;
    }

    if (p == NULL || p->next == NULL)
    {
        printf("Node with value %d not found or it's the last node. Cannot delete after it.\n", value);
        return head;
    }

    q = p->next; 
    p->next = q->next;
    printf("The deleted element is %d\n", q->data); 
    free(q);

    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    
    if (head == NULL)
    {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }

    if (head->next == NULL)
    {
        printf("The deleted element is %d\n", head->data);
        free(head);
        return NULL;
    }
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }    
    p->next = NULL;
    printf("The deleted element is %d\n", q->data);
    free(q);
    return head;
}

int main()
{
    int choice, x;
    do
    {
        printf("\nMENU\n");
        printf("1. Insertion at begin\n");
        printf("2. Insertion after a node\n");
        printf("3. Insertion at end\n");
        printf("4. Deletion at begin\n");
        printf("5. Deletion after a node\n");
        printf("6. Deletion at end\n");
        printf("7. Traversal\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data for new Node : ");
            scanf("%d", &x);
            head = insertionAtBegin(head, x);
            break;
        case 2:
        {
            int key;
            printf("Enter the key after which you want to insert a new Node: ");
            scanf("%d", &key);
            printf("Enter the data for new Node : ");
            scanf("%d", &x);
            head = insertionAfterNode(head, key, x);
        }
        break;
        case 3:
            printf("Enter the data for new Node : ");
            scanf("%d", &x);
            head = insertionAtEnd(head, x);
            break;
        case 4:
            head = deleteAtBegin(head);
            break;
        case 5:
        { // Added braces
            int key;
            printf("Enter the key after which you want to delete a Node: ");
            scanf("%d", &key);
            head = deleteAfterNode(head, key);
        }
        break;
        case 6:
            head = deleteAtEnd(head);
            break;
        case 7:
            linkedListTraversal(head);
            break;
        case 8:
            printf("You exit\n");
            break;
        default:
            printf("You entered wrong choice\n");
        }
    } while (choice != 8);
    return 0;
}