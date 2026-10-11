#include <stdio.h>

void merge(int orderId[], int left, int mid, int right) {
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy data to temporary arrays
    for(i = 0; i < n1; i++)
        L[i] = orderId[left + i];

    for(j = 0; j < n2; j++)
        R[j] = orderId[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    // Merge the arrays in ascending order
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            orderId[k] = L[i];
            i++;
        }
        else {
            orderId[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i < n1) {
        orderId[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        orderId[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int orderId[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;

        mergeSort(orderId, left, mid);
        mergeSort(orderId, mid + 1, right);

        merge(orderId, left, mid, right);
    }
}

int main() {
    int orderId[5], i;

    printf("Enter 5 Online Order IDs:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &orderId[i]);
    }

    mergeSort(orderId, 0, 4);

    printf("\nSorted Online Order IDs:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", orderId[i]);
    }

    return 0;
}