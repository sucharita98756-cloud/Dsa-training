//array implementation of stack
#include<stdio.h>

int stack[5];
int top = -1;
void push(int num){
    if(top==4 ){
      printf("STACK IS FULL");

    }
    else{
        top=top+1;
        stack[top]=num;
        printf("pushes %d\n",num);
    }
}
int main(){
    int num;
    for(int i=0;i<5;i++){
    printf("Enter a number to push into stack: ");
    scanf("%d",&num);
    push(num);  
}
    return 0;
}