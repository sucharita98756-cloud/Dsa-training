#include <stdio.h>

int main()
{
    int att[5];
    int i;
    int present = 0, absent = 0;

    // Input attendance
    for(i = 0; i < 5; i++) {
        printf("Student %d attendance (1=Present, 0=Absent): ", i + 1);
        scanf("%d", &att[i]);
    }

    // Count attendance
    for(i = 0; i < 5; i++) {

        if(att[i] == 1) {
            present++;
        }
        else {
            absent++;
        }
    }

    // Display result
    printf("\nTotal Present Students = %d\n", present);
    printf("Total Absent Students = %d\n", absent);

    return 0;
}