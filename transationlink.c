#include<stdio.h>
#include<stdlib.h>
struct transaction {
int id;
float amount;
char type[20];
struct transaction *next;
};
struct transaction *head = NULL;
// ADD TRANSACTION
void addTransaction(){
  struct transaction *newnode,*temp;

  newnode =(struct transaction*)malloc(sizeof(struct transaction));
  printf("enter transaction ID :");
  scanf("%d ",&newnode->id);
  printf("enter amount :");
  scanf("%d ",&newnode->amount);
  printf("enter transaction type(deposit/withdraw) :");
  scanf("%d ",&newnode->type);
  newnode->next=NULL;
  if(head == NULL){
    head = newnode;
  }else{
    temp=head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=newnode;
  }
  printf("transaction added successfully\n");

}
void showTranction(){
    struct transaction *temp=head;
    if(head == NULL){
        printf("no transaction history\n");
        return;
    }
    printf("\n__transaction history__\n");
    while(temp != NULL){
        printf("ID: %d\n",temp->id);
        printf("Amount: %.2f\n", temp->amount);
        printf("Type: %s\n", temp->type);
        printf("--------------------------\n");

        temp = temp->next;
    }
}
void searchTransaction(){
    struct transction *temp = head;
    int searchID,found=0;
    printf("Enter Transaction ID to Search: ");
    scanf("%d", &searchID);
    while(temp !=NULL){
        if(temp->id== searchID){
            printf("\n transaction found ");
            rintf("ID: %d\n", temp->id);
            printf("Amount: %.2f\n", temp->amount);
            printf("Type: %s\n", temp->type);

            found = 1;
            break;
        }
        temp=temp->next;      
  if(found == 0) {
        printf("Transaction Not Found!\n");
    }
    }
}
void deleteFirstTransaction(){
    struct transaction *temp;

    if(head == NULL) {
        printf("No Transaction to Delete!\n");
        return;
}
temp =head;
head=head->next;
printf("delete transation id ",temp->id);
free(temp);
}
int main(){
    int choice;
     printf("\n===== BANK TRANSACTION MENU =====\n");
        printf("1. Add Transaction\n");
        printf("2. Show Transaction History\n");
        printf("3. Search Transaction\n");
        printf("4. Delete First Transaction\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);
   switch(choice) {

            case 1:
                addTransaction();
                break;

            case 2:
                showTransactions();
                break;

            case 3:
                searchTransaction();
                break;

            case 4:
                deleteFirstTransaction();
                break;

            case 5:
                printf("Program Exited.\n");
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    

    return 0;
}
