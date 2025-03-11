#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Data Structure

struct Student {
    int id;
    char name[100];
    int age;
};

//other functions

void showMenu()
{
    printf("\nOptions for Students Managment:\n");   
    printf("1.Create new User /t ");
    printf("2.Display existing Users/t");
    printf("3.Exit\n");
}

void displayStudent( struct Student student){
    printf("\n Display student Datat");
    printf("\n ID: %d\n", student.id);
    printf("\n Name: %s\n", student.name);
    printf("\n Age: %d\n", student.age);
    printf("------------------------------\n");
}

struct Student acceptStudentDetails(){
    struct Student student;
    printf("New Students Details for registration:\n");
    printf("\nEnter student ID: ");
    scanf("%d", &student.id);
    printf("Enter student name: ");
    getchar(); // Clear newline left by scanf
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove newline
    printf("Enter student age: ");
    scanf("%d", &student.age);
    return student;
}

void writeToFile(const char *pfilename, struct Student stdnt) {
    if (pfilename == NULL) {
        printf("Error: Invalid file name.\n");
        return;
    }
    FILE *pfile = fopen(pfilename, "ab");
    if (pfile == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    fwrite(&stdnt, sizeof(struct Student), 1, pfile);
    fclose(pfile);
}
         
void readFromFile(const char *pfilename) {
    FILE *pfile = fopen(pfilename, "rb");
    if (pfile == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    struct Student student;
    printf("\nTransflower Student Details:\n");
    while (fread(&student, sizeof(struct Student), 1, pfile)) {
        displayStudent(student);
    }
    fclose(pfile);
}


//global function :Entry Point
int main() {
    const char *pfilename = "student.info";
    int choice;
    struct Student theStudent;
    
    do {    
        showMenu();

        printf("\nEnter your choice : ");
        scanf("%d",&choice );
        switch (choice)
        {
            case 1:
                theStudent = acceptStudentDetails();
                writeToFile(pfilename, theStudent);
            break;

            case 2:
                readFromFile(pfilename);  
            break;
            
            case 3: 
                printf ("exit");
                break;  

            default:
                printf("invalid choice plz try again\n");
                break;
            }
    } while (choice !=3);
    return 0;
}