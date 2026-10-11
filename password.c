#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char password[100];

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;

    printf("Enter Password: ");
    scanf("%s", password);

    int len = strlen(password);

    // Check each character
    for(int i = 0; i < len; i++){

        if(isupper(password[i])){
            upper = 1;
        }

        else if(islower(password[i])){
            lower = 1;
        }

        else if(isdigit(password[i])){
            digit = 1;
        }

        else{
            special = 1;
        }
    }

    // Validation
    if(len >= 8 && upper && lower && digit && special){

        printf("\nStrong Password\n");
    }

    else{

        printf("\nWeak Password\n");

        if(len < 8){
            printf("- Password must be at least 8 characters\n");
        }

        if(!upper){
            printf("- Add at least one uppercase letter\n");
        }

        if(!lower){
            printf("- Add at least one lowercase letter\n");
        }

        if(!digit){
            printf("- Add at least one digit\n");
        }

        if(!special){
            printf("- Add at least one special character\n");
        }
    }

    return 0;
}