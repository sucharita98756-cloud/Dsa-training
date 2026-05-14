#include <stdio.h>
int main()
{
   int productid[5] = {101, 102, 103, 104, 105};
   int searchid, i, found = 0;

   printf("Enter the productid: ");
   scanf("%d", &searchid);   // <-- You need to read input here

   for(i = 0; i < 5; i++) {
       if(productid[i] == searchid) {
           found = 1;
           break;   // optional: stop once found
       }
   }

   if(found == 1) {
       printf("Product display....\n");
   } else {
       printf("Product not display....\n");
   }

   return 0;
}
