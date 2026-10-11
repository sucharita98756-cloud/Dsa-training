#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    float *price = (float *)malloc(n * sizeof(float));

    if(price == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &price[i]);
        total += price[i];
    }

    printf("\nTotal Bill = %.2f\n", total);

    free(price);

    return 0;
}