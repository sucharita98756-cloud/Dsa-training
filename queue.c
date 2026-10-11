#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Enqueue Function
void en(int value) {

    // Check Overflow
    if(rear == SIZE - 1) {
        printf("OVERFLOW\n");
    }
    else {

        // First insertion
        if(front == -1) {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("%d inserted\n", value);
    }
}

int main() {

    en(20);
    en(30);
    en(40);
    en(50);

    return 0;
}