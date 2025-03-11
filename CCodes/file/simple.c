#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Student{
    int id;
    char name[20];
    int age ;

}; 
void menu(){
     printf("welcome to the transflower\n");
     printf("1.enter the new data\n");
     printf("2.display the previous data\n");
     printf ("3.exit\n");
}

void displayStudent(struct Student s){
    printf ("\n  **************display the student info*******");
    printf("id=%d\n",s.id);
    printf("name=%s\n",s.name);
    printf("age=%d\n",s.age);
}

void display (struct Student student){
    
    printf("id=%d\n",student.id );
    printf("name=%S\n",student.name);
    printf ("age=%d",student.age );
}
int acceptoption(){ 
   printf("enter your option");
   int option;
   scanf("%d" ,&option);
   return option;
}

struct Student acceptStudent(){
    int id ;
    char name[20];
    int age ;
    printf("enter your id:");
    scanf("%d",&id);
    printf("\nenter student name");
    scanf("%s",&name );
    printf("\nenter age");
    scanf("%d",&age);
    struct Student s;
    s.id =id;
    strcpy(s.name,name);
    s.age=age;
    printf("\n Thank you for student information \n");
    return s;

}

int main(){
    struct Student user ;
    bool status=true;
    int value;
    printf("you have selected value=%d\n",value);
    while (status){
    menu();
    value=acceptoption();
    switch (value)
    {
    case 1:
        {
          user=acceptStudent();
        }
        break;
    case 2: 
    {
        displayStudent(user);
    }
         break;
    case 3:
           return 0;
          break;
    default:
       printf("invalid option");
        break;
    }
}
}
