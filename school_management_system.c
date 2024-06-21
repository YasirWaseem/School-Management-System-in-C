#include<stdio.h>

struct Student
{
    char firstname[15];
    char lastname[15];
    int roll;
    long long int uid;
    char department[15];
    char gender;
};

struct Teacher
{
    char firstname[15];
    char lastname[15];
    long long int uid;
    char department[30];
};

struct Staff
{
    char firstname[15];
    char lastname[15];
    long long int uid;
    char department[30];
};

void view_student();
void add_student();

void view_teacher();
void add_teacher();

void view_staff();
void add_staff();

int main(){
    int choice;
    while(1){
        printf("1. View Students\t\t");
        printf("2. Add Student\n");
        printf("3. View Faculties\t\t");
        printf("4. Add Faculties\n");
        printf("5. View Staffs\t\t\t");
        printf("6. Add Staffs\n");

        printf("Enter Choice\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            view_student();
            break;
        
        case 2:
            add_student();
            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 6:

            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}

void add_student(){
    struct Student student;
    FILE *fptr;

    fptr = fopen("Students.txt", "a");
    
    printf("Enter Student's First name\n");
    scanf("%s", student.firstname);

    printf("Enter Student's Last name\n");
    scanf("%s", student.lastname);

    printf("Enter Roll Number\n");
    scanf("%d", &student.roll);

    printf("Enter Aadhar Number\n");
    scanf("%lld", &student.uid);
    
    printf("Enter Department\n");
    scanf("%s", &student.department);

    printf("Enter Gender\n");
    scanf("%c", &student.gender);

    fprintf(fptr, "%s %s %d %lld %s %c", student.firstname, student.lastname, student.roll, student.uid, student.department, student.gender);

    fclose(fptr);

    printf("Student added sucessfully. \n");
}

void view_student(){
struct Student student;

FILE *fptr;
fptr = fopen("Students.txt", "r");
if (fptr == NULL)
{
    printf("Unable to open file!\n");
    return;
}

while(fscanf(fptr, "%14s %14s %d %lld %14s %c", student.firstname, student.lastname, &student.roll, &student.uid, student.department, &student.gender) != EOF){
    printf("Name: %s %s(%c)\n", student.firstname, student.lastname, student.gender);
    printf("Roll: %d\n", student.roll);
    printf("Aadhar Number: %lld\n", student.uid);
    printf("Department: %s\n\n", student.department);
}

}
