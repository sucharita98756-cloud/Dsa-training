/* 
feature;
product add
product search
product display
stock update
use dsa->
product data store=>
multiple product manage=>
memory access=>
runtime memory=>
product finding=>
product namehandlling=>
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct product{
    int id;
    char name[90];
    int quantity;
    float price;
};
int main(){
    int n;
    printf("enter the number of product  :");
    scanf("%d",&n);
    struct product *p;
    p = (struct product *)malloc(n * sizeof(struct product));
    //add product
    for(int i=0;i<n;i++){
        printf("enter product id :\n");
        scanf("%d",&p[i].id);
        printf("enter product name:\n");
        scanf("%s",p[i].name);
        printf("enter product quantity:\n");
        scanf("%d",&p[i].quantity);
        printf("enter product price:\n");
        scanf("%f",&p[i].price);
    }
    //display
    for(int i=0;i<n;i++){
        printf("\nenter product id: %d",p[i].id);
        printf("\nenter product name: %s",p[i].name);
        printf("\nenter product quantity: %d",p[i].quantity);
        printf("\nenter product price: %f",p[i].price);

    //low stock alert
    if(p[i].quantity <5){
        printf("low stock alert\n");

    }
    printf("\n");
}
//search product
int searchid;
int found=0;
printf("enter product id for search :");
    scanf("%d",&searchid);
  for(int i=0;i<n;i++){
   if(p[i].id==searchid){
    found=1;
    printf("product found\n");
     printf("\nproduct id: %d",p[i].id);
        printf("\n product name: %s",p[i].name);
        printf("\nproduct quantity: %d",p[i].quantity);
        printf("\n product price: %f",p[i].price);
        break;
   }

} 
if(found == 1){
    printf("\n product found\n");
}
else
printf("product is not found");

//stock update
int updatedid;
int newstock;
printf("enter product id for update stock :");
    scanf("%d",&updatedid);
  for(int i=0;i<n;i++){
   if(p[i].id==updatedid)
   {printf("enter newstock :");
    scanf("%d",&newstock );
    p[i].quantity=newstock;
    printf("\n stock updated successfully\n");
    printf("update quantity: %d\n",p[i].quantity);
    break;
   }


}
free(p);
return 0;
}
