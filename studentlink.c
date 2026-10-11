#include<stdio.h>
#include<stdlib.h>
struct student {
    int roll;
    struct student *next;
};
struct student *head = NULL;
void addstudent(int roll) {
    struct student *newNode ;
    newNode = (struct student*)malloc(sizeof(struct student));
    newNode->roll = roll;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
    } else {
        struct student *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Student added successfully with roll number: %d\n", roll);
}
void viewstudents() {
    struct student *temp = head;
    if(temp == NULL) {
        printf("No students in the list.\n");
        return;
    }
        printf("List of students:\n");
        while(temp != NULL) {
            printf("Roll Number: %d\n", temp->roll);
            temp = temp->next;
        }
    }
void searchstudent(int roll) {
    struct student *temp = head;
    while(temp != NULL) {
        if(temp->roll == roll) {
            printf("Student found with roll number: %d\n", roll);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d not found.\n", roll);

}
void deletestudent(int roll) {
    struct student *temp = head, *prev = NULL;
    if(temp != NULL && temp->roll == roll) {
        head = temp->next;
        free(temp);
        printf("Student with roll number %d deleted successfully.\n", roll);
        return;
    }
    while(temp != NULL && temp->roll != roll) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("Student with roll number %d not found.\n", roll);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Student with roll number %d deleted successfully.\n", roll);
}
int main() {
    addstudent(101);
    addstudent(102);
    addstudent(103);
    viewstudents();
    searchstudent(102);
    deletestudent(102);
    viewstudents();
    return 0;
}