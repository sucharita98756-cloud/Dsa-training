#include<stdio.h>
int main(){
    int x = 10;
    int *ptr;
    ptr = &x;

    printf("value = %d\n", x);          // prints 10
    printf("address = %p\n", (void*)&x); // prints address of x
    printf("pointer value = %d\n", *ptr); // prints value at pointer (10)

    return 0;
}
