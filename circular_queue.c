#include <stdio.h>

int queue1[100], front = -1, rear = -1;
int currsize=0;

void circular_enqueue(int cap, int x) {
    // Check for overflow
    if ((rear + 1) % cap == front) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
        queue1[rear] = x;
    } 
    else {
        rear = (rear + 1) % cap;
        queue1[rear] = x;
    }
    currsize++;
}

int circular_dequeue(int cap)
{
    if(currsize==0){
       printf("Underflow");
        return -1;
    }
    int ele=queue1[front];
    front=(front+1) % cap;
    currsize--;

    if (currsize == 0) {
        front = 0;
        rear = -1;
    }

    printf("Dequeued element = %d\n", ele);
    return ele;
}

void display(int cap) {
    if (currsize == 0 || front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue1[i]);
        if (i == rear)
            break;
        i = (i + 1) % cap;
    }
    printf("\n");
}

int main() {
    int cap, choice, x;
    printf("Enter capacity of circular queue: ");
    scanf("%d", &cap);

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &x);
                circular_enqueue(cap, x);
                break;
            case 2:
                circular_dequeue(cap);
                break;
            case 3:
                display(cap);
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
