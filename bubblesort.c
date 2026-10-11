#include<stdio.h>

int main() {
    int arr[4] = {700, 800, 900, 200};
    int i, j, temp;


    for(i = 0; i < 4-1; i++) {
        for(j = 0; j < 4-1; j++) {

            // Compare nearest numbers
            if(arr[j] > arr[j+1]) {

                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Prices (Low to High):\n");

    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}