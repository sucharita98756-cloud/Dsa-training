#include<stdio.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
int stack[max];
int top=-1;
void orderplace(){
    int orderid;
    if(rear==max-1){
        printf("order is full");
    }else{printf("enter you order id:\n");
        scanf("%d",& orderid);
        rear++;
        if(front=-1){
            rear=0;
        }
        queue[rear]=orderid;
    }
    printf("order is add");
}
void processordeer(){
    printf("delivered order:",queue[front]);
    top++;
    stack[top]=queue[front];
front++;}
void recentdelivery(){
    printf("recent delivery:%d",stack[top]);
}
void showOrders(){
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
void delivereditem(){
    printf("Delivered Order History:\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
    int main() {

    int choice;

    do {

        printf("\n===== FOOD DELIVERY SYSTEM =====\n");

        printf("1. Place Order\n");
        printf("2. Process Order\n");
        printf("3. Recent Delivery\n");
        printf("4. Show Pending Orders\n");
        printf("5. Show Delivery History\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                orderplace();
                break;

            case 2:
                 processordeer();
                break;

            case 3:
                recentdelivery();
                break;

            case 4:
                showOrders();
                break;

            case 5:
                delivereditem();
                break;

            case 6:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}