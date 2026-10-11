#include<stdio.h>
int main(){
    int i, j, temp;

    int salary[5];
    printf("employed 5 salary :\n");
    for(i=0;i<5;i++){
        scanf("%d",&salary[i]);
    }
     for(i = 0; i < 5-1; i++) {
        for(j = i; j < 5-1; j++) {

            
            if(salary[i] > salary[j+1]) {

                
                temp = salary[i];
                salary[i] = salary[j+1];
                salary[j+1] = temp;
            }
        }
    }

    printf("Sorted order salary :\n" );
    for(i = 0; i < 5; i++) {
        printf("%d ", salary[i]);
    }

    return 0;
}