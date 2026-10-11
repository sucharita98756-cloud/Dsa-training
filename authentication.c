#include <stdio.h>
#include <string.h>

int main() 
{
    char username[20], password[20];

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);
    if(strcmp(username, "sucharita") == 0 && strcmp(password, "1234") == 0)
    {
        printf("Login Successful!\n");
    }
    else
    {
        printf("Invalid Username or Password.\n");
    }

    return 0;
}