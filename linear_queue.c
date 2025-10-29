#include <stdio.h>

int queue1[100], front = -1, rear = -1;

void enqueue(int n, int x) {
    if (rear == n - 1) {
        printf("Overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue1[++rear] = x;
    }
}

void dequeue(int n) {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
    } else {
        int ele = queue1[front];
        printf("Dequeued Element = %d\n", ele);
        if (front == rear) {
            front = rear = -1; // queue becomes empty
        } else {
            front = front + 1;
        }
    }
}

int main() {
    int n, choice, x;
    printf("Enter the size of queue: ");
    scanf("%d", &n);
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to be inserted: ");
                scanf("%d", &x);
                enqueue(n, x);
                break;
            case 2:
                dequeue(n);
                break;
            case 3:
                if (front == -1) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue1[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
