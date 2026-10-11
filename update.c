#include <stdio.h>
#include <stdlib.h>

void updateSalary(float *salary, float increment)
{
    *salary = *salary + increment;
}

int main()
{
    float salary, increment;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter increment amount: ");
    scanf("%f", &increment);

    updateSalary(&salary, increment);

    printf("Updated Salary = %.2f\n", salary);

    return 0;
}