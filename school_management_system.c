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
    char gender;
};

struct Staff
{
    char firstname[15];
    char lastname[15];
    long long int uid;
    char work[30];
    char gender;
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
        printf("0. Exit the program\n");

        printf("Enter Choice\n");
        scanf("%d", &choice);
        
        switch (choice)
        {

        case 0:
            printf("Exiting the program...");
            return 0;
    
        case 1:
            view_student();
            break;
        
        case 2:
            add_student();
            break;

        case 3:
            view_teacher();
            break;

        case 4:
            add_teacher();
            break;

        case 5:
            view_staff();
            break;

        case 6:
            add_staff();
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
    scanf(" %c", &student.gender);

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

    fclose(fptr);

}

void add_teacher(){
    struct Teacher teacher;
    FILE *fptr;
    fptr = fopen("Teacher.txt", "a");

    printf("Enter Teacher's First name\n");
    scanf("%s", teacher.firstname);

    printf("Enter Teacher's Last name\n");
    scanf("%s", teacher.lastname);

    printf("Enter Aadhar Number\n");
    scanf("%lld", &teacher.uid);
    
    printf("Enter Department\n");
    scanf("%s", &teacher.department);

    printf("Enter Gender\n");
    scanf(" %c", &teacher.gender);

    fprintf(fptr, "%s, %s, %lld, %s, %c", teacher.firstname, teacher.lastname, teacher.uid, teacher.department, teacher.gender);

    fclose(fptr);

    printf("Teacher added sucessfully.\n");
}

void view_teacher(){
    struct Teacher teacher;
    FILE *fptr;

    fptr = fopen("Teacher.txt","r");

    if(fptr == NULL){
        printf("Unable to open file!\n");
    }

    while(fscanf(fptr,"%14s %14s %lld %14s %c", teacher.firstname, teacher.lastname, &teacher.uid, teacher.department, teacher.gender) != EOF){
        printf("Name: %s %s(%c)\n", teacher.firstname, teacher.lastname, teacher.gender);
        printf("Aadhar Number: %lld\n", teacher.uid);
        printf("Department: %s\n\n", teacher.department);
    }
    fclose(fptr);
}

void add_staff(){
struct Staff staff;
FILE *fptr;
fptr = fopen("Staff.txt", "a");

printf("Enter Staff's first name\n");
scanf("%s", &staff.firstname);

printf("Enter Staff's Last name\n");
scanf("%s", staff.lastname);

printf("Enter Aadhar Number\n");
scanf("%lld", &staff.uid);
    
printf("Enter Role\n");
scanf("%s", &staff.work);

printf("Enter Gender\n");
scanf("% c", &staff.gender);

fprintf(fptr,"%s %s %lld %s %c", staff.firstname, staff.lastname, staff.uid, staff.work, staff.gender);

fclose(fptr);

printf("Staff Added sucessfully.");
}

void view_staff(){
    struct Staff staff;
    FILE *fptr;
    fptr = fopen("Staff.txt", "r");

    while(fscanf(fptr,"%14s %14s %lld %14s %c", staff.firstname, staff.lastname, &staff.uid, staff.work, &staff.gender) != EOF){
        printf("Name: %s %s(%c)\n", staff.firstname, staff.lastname, staff.gender);
        printf("Aadhar Number: %lld\n", staff.uid);
        printf("Work: %s\n\n", staff.work);
    }
    fclose(fptr);
}
