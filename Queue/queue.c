#include<stdio.h>

int f = -1, r = -1;
int n = 5;
int q[5];

void enqueue(int x) {
    if (r == n - 1) {
        printf("Queue is full \n");
    } else if (f == -1 && r == -1) {
        f = r = 0;
        q[r] = x;
    } else {
        r++;
        q[r] = x;
    }
}

void dequeue() {
    if (f == -1 && r == -1) {
        printf("Queue is empty \n");
    } else if (f == r) {
        printf("Element removed\n");
        f = r = -1;
    } else {
        f++;
    }
}

void display() {
    if (f == -1 && r == -1) {
        printf("Queue is empty \n");
    } else {
        int i;
        for (i = f; i < r + 1; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}

int main() {
    int op;
    do {
        printf("1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \nEnter your choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                {
                    int x;
                    printf("\nEnter the element to enqueue: ");
                    scanf("%d", &x);
                    enqueue(x);
                    break;
                }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (op != 4);

    return 0;
}
