
/* Browser history managment system using stack Inventorysystem.exe
 3 .website history save Clibc.c 4 .new website open 5 libc.exe 
 6 .back button work C mallocpoint.c 
 .current page display
  7 mallocpoint.exe use lifo rules pb1stack.c 9 8 */
#include<stdio.h>
#include<string.h>

#define size 5

char stack[size][50];
int top = -1;

// PUSH Operation
void visitwebsite(char url[]) {

    if(top == size - 1) {
        printf("\nHistory Full Overflow\n");
    }
    else {
        top++;
        strcpy(stack[top], url);

        printf("\nVisited : %s\n", url);
    }
}

// POP Operation
void goback() {

    if(top == -1) {
        printf("\nNo History Show\n");
    }
    else {

        printf("\nBack From : %s\n", stack[top]);
        top--;
    }
}

// Current Page
void currentpage() {

    if(top == -1) {
        printf("\nNo Current Page\n");
    }
    else {

        printf("\nCurrent Page : %s\n", stack[top]);

        // DON'T do top--
    }
}

// Display Full History
void dh() {

    if(top == -1) {
        printf("\nNo Browser History\n");
    }
    else {

        printf("\nBrowser History:\n");

        for(int i = top; i >= 0; i--) {

            printf("%s\n", stack[i]);
        }
    }
}

int main() {

    visitwebsite("google");
    visitwebsite("youtube");
    visitwebsite("instagram");
    visitwebsite("facebook");

    currentpage();

    dh();

    goback();

    currentpage();

    return 0;
}