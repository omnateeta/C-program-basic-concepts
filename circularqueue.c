#include <stdio.h>
#include <stdlib.h>
#define MAX 3

char cq[MAX]; // Circular queue array
int front = -1, rear = -1;

// Function prototypes
void insert(char item);
void delete_element();
void display();

int main() {
    int ch;
    char item;

    while (1) {
        printf("\n1. Insertion and Overflow demo");
        printf("\n2. Deletion and Underflow demo");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter element to be inserted: ");
                scanf(" %c", &item); // Added space before %c to avoid newline issues
                insert(item);
                break;

            case 2:
                delete_element();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nPlease enter a valid choice.");
        }
    }
    return 0;
}

// Function to insert an element into the circular queue
void insert(char item) {
    if ((rear + 1) % MAX == front) {
        printf("\n~~ Circular Queue Overflow ~~");
    } else {
        if (front == -1) { // First insertion
            front = 0;
        }
        rear = (rear + 1) % MAX;
        cq[rear] = item;
        printf("\nElement '%c' inserted successfully!", item);
    }
}

// Function to delete an element from the circular queue
void delete_element() {
    if (front == -1) {
        printf("\n~~ Circular Queue Underflow ~~");
    } else {
        char item = cq[front];
        printf("\nDeleted element from the queue is: %c", item);

        if (front == rear) { // Only one element left
            front = rear = -1; // Reset queue
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Function to display the elements of the circular queue
void display() {
    if (front == -1) {
        printf("\nCircular Queue is empty.");
    } else {
        printf("\nCircular Queue contents are:\n");
        printf("Front [%d] -> ", front);

        int i = front;
        while (1) {
            printf("%c ", cq[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % MAX;
        }
        printf("<- Rear [%d]", rear);
    }
}

