#include<stdio.h>
int main(){
    float prices[5];
    int i,j,k,temp;
    printf("enter the price of 5 product");
    for(i=0;i<5;i++){
        scanf("%f",&prices[i]);
    }
    for(j=0;j<5;j++){
        for(k=j+1;k<5;k++){
            if(prices[j]>prices[k]){
                temp=prices[j];
                prices[j]=prices[k];
                prices[k]=temp;
            }
        }
    }

 printf("\nProduct prices in ascending order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%.2f ", prices[i]);
    }

    return 0;
}