#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    int id;
    char name[20];
    int age;
};

// Function to display the menu options
void menu() {
    printf("\nWelcome to Transflower\n");
    printf("1. Enter new data\n");
    printf("2. Display previous data\n");
    printf("3. Exit\n");
}
void displayStudent(struct Student *s) {
    if (s->id == 0) {  // Check if data is available
        printf("\nNo student data available. Please enter student details first.\n");
        return;
    }
    printf("\n************** Student Information **************\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
}
void acceptStudent(struct Student *s) {
    printf("\nEnter Student ID: ");
    scanf("%d", &s->id);

    printf("Enter Student Name: ");
    scanf("%s", s->name); 

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("\nThank you for providing student information.\n");
}
int acceptOption() {
    int option;
    printf("\nEnter your option: ");
    scanf("%d", &option);
    return option;
}

int main() {
    struct Student user = {0}; 
    bool status = true;
    int value;

    while (status) {
        menu();
        value = acceptOption();

        switch (value) {
            case 1:
                acceptStudent(&user);
                break;
            case 2:
                displayStudent(&user);
                break;
            case 3:
                printf("Exit.\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}