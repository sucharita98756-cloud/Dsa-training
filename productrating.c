#include<stdio.h>

int main() {

    int rating[5];
    int i, j, temp;

    // Input ratings
    printf("Enter 5 product ratings:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &rating[i]);
    }

    
    for(i = 0; i < 5- 1; i++) {

       for(j = i ; j < 5-1; j++) {

        if(rating[i] < rating[j+1]) {
        temp = rating[i];
        rating[i] = rating[j+1];
        rating[j+1] = temp;
               
            }
        }

    }

    printf("\nRatings in Descending Order:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", rating[i]);
    }

    return 0;
}