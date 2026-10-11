#include<stdio.h>

int main(){

    int seats[10] = {0};
    int choice, seat;

    while(1){

        printf("\n===== BUS RESERVATION SYSTEM =====\n");

        printf("1. Display Seats\n");
        printf("2. Book Seat\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:

                printf("\n===== Seat Status =====\n");

                for(int i=0; i<10; i++){

                    if(seats[i] == 0){
                        printf("Seat %d : Available\n", i+1);
                    }

                    else{
                        printf("Seat %d : Reserved\n", i+1);
                    }
                }

                break;

            case 2:

                printf("\nEnter Seat Number (1-10): ");
                scanf("%d",&seat);

                if(seat < 1 || seat > 10){

                    printf("Invalid Seat Number!\n");
                }

                else if(seats[seat-1] == 1){

                    printf("Seat Already Reserved!\n");
                }

                else{

                    seats[seat-1] = 1;

                    printf("Seat %d Booked Successfully!\n", seat);
                }

                break;

            case 3:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}