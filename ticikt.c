#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Check Stack Full
int isFull() {
    return top == MAX - 1;
}

// Check Stack Empty
int isEmpty() {
    return top == -1;
}

// Book Ticket (Push)
void bookTicket() {

    int ticketID;

    if(isFull()) {
        printf("\nTicket Stack Overflow!\n");
    }
    else {

        printf("Enter Ticket ID: ");
        scanf("%d", &ticketID);

        top++;
        stack[top] = ticketID;

        printf("Ticket Booked Successfully.\n");
    }
}

// Cancel Ticket (Pop)
void cancelTicket() {

    if(isEmpty()) {
        printf("\nNo Ticket Available To Cancel.\n");
    }
    else {

        printf("Cancelled Ticket ID: %d\n", stack[top]);

        top--;
    }
}

// Show Latest Ticket (Peek)
void showLatestTicket() {

    if(isEmpty()) {
        printf("\nNo Tickets Booked.\n");
    }
    else {

        printf("Latest Ticket ID: %d\n", stack[top]);
    }
}

// Display All Tickets
void displayTickets() {

    int i;

    if(isEmpty()) {
        printf("\nNo Tickets Available.\n");
    }
    else {

        printf("\nAll Booked Tickets:\n");

        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main Function
int main() {

    int choice;

    do {

        printf("\n===== Railway Ticket Cancellation System =====\n");

        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Show Latest Ticket\n");
        printf("4. Display All Tickets\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                bookTicket();
                break;

            case 2:
                cancelTicket();
                break;

            case 3:
                showLatestTicket();
                break;

            case 4:
                displayTickets();
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}