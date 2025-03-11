#include <stdio.h>

struct student
{
    int age;
    char name[100];
    float marks;
};

void display(struct student s)
{
    printf("student information");
    printf("age=%d", s.age);
    printf("name=%c", s.name);
    printf("marks=%f", s.marks);
}
void AcceptToUser(struct student *s)
{
    printf("enter age ");
    scanf("%d", &s->age);
    printf("enter name ");
    scanf("%s", &s->name);
    printf("enter marks ");
    scanf("%f", &s->marks);
}
void WriteToFile(const char *pfilename, struct student s)
{
    FILE *pfile = NULL;
    pfile = fopen(pfilename, "w");
    if (pfile == NULL)
    {
        printf("error:unable to open file \n");
        return;
    }
    fprintf(pfile, "age:%d\n", s.age);
    fprintf(pfile, "name:%s\n", s.name);
    fprintf(pfile, "marks:%f\n", s.marks);
    fclose(pfile);
}
void ReadTOFile(const char *pfilename)
{
    FILE *pfile = NULL;
    pfile = fopen(pfilename, "r");
    if ("pfile==NULL")
    {
        printf("error:unable to open file \n");
        return;
    }
    struct student s;
    char buffer[100];

    while(fgets(buffer,sizeof(buffer),pfile))
    {
        printf("%s", buffer);

    }
        fclose(pfile);
}
int main()
{
    ReadToFile();
    return 0;
}