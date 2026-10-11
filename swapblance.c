#include<stdio.h>

void swap(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float acc1, acc2;

    printf("Enter first account balance: ");
    scanf("%f", &acc1);

    printf("Enter second account balance: ");
    scanf("%f", &acc2);

    printf("\nBefore swapping:\n");
    printf("Account 1 = %.2f\n", acc1);
    printf("Account 2 = %.2f\n", acc2);

    swap(&acc1, &acc2);

    printf("\nAfter swapping:\n");
    printf("Account 1 = %.2f\n", acc1);
    printf("Account 2 = %.2f\n", acc2);

    return 0;
}