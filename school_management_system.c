#include<stdio.h>
#include <mysql.h>
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

void view_student(MYSQL *conn);
void add_student(MYSQL *conn);

void view_teacher(MYSQL *conn);
void add_teacher(MYSQL *conn);

void view_staff(MYSQL *conn);
void add_staff(MYSQL *conn);

int main(){

    MYSQL *conn;
    conn = mysql_init(NULL);

    if(conn == NULL){
        fprintf(stderr, "mysql_init() failed\n");
        return EXIT_FAILURE;
    }

    conn = mysql_real_connect(conn, "127.0.0.1", "root", "password", "college", 3306, "NULL", 0);
    if (conn == NULL) {
        fprintf(stderr,"mysql_real_connect() failed\n");
        mysql_close(conn);
        return EXIT_FAILURE;
    }

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
            mysql_close(conn);
            return 0;
    
        case 1:
            view_student(conn);
            break;
        
        case 2:
            add_student(conn);
            break;

        case 3:
            view_teacher(conn);
            break;

        case 4:
            add_teacher(conn);
            break;

        case 5:
            view_staff(conn);
            break;

        case 6:
            add_staff(conn);
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}

void add_student(MYSQL *conn){
    struct Student student;
    
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

    char query[255];
    sprintf(query,"INSERT INTO student(firstname, lastname, roll, uid, department, gender)VALUES('%s', '%s', %d, %lld, '%s', '%c');", student.firstname, student.lastname, student.roll, student.uid, student.department, student.gender);

    if(mysql_query(conn, query)) {
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }
    
    printf("Student added sucessfully. \n");

}

void view_student(MYSQL *conn){

    MYSQL_RES *res;
    MYSQL_ROW row;

    if (mysql_query(conn, "SELECT * FROM student")){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    res = mysql_store_result(conn);
    if(res == NULL){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    while(row = mysql_fetch_row(res)){
        printf("Name: %s %s (%s)\n", row[0], row[1], row[5]);
        printf("Roll: %s\n", row[2]);
        printf("Aadhar Number: %s\n", row[3]);
        printf("department: %s\n\n", row[4]);
    }

    mysql_free_result(res);

}

void add_teacher(MYSQL *conn){
    struct Teacher teacher;
    

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

    char query[255];
    sprintf(query, "INSERT INTO teacher(firstname, lastname, uid, department, gender) VALUES('%s', '%s', %lld, '%s', '%c')", teacher.firstname, teacher.lastname, teacher.uid, teacher.department, teacher.gender);

    if(mysql_query(conn, query)){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    printf("Teacher added sucessfully.\n");
}

void view_teacher(MYSQL *conn){
    MYSQL_RES *res;
    MYSQL_ROW row;

    if(mysql_query(conn, "SELECT * FROM teacher")){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    res = mysql_store_result(conn);
    if(res == NULL){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    while((row = mysql_fetch_row(res))){
        printf("Name: %s %s (%s)\n", row[0], row[1], row[4]);
        printf("Aadhar Number: %s\n", row[2]);
        printf("department: %s\n\n", row[3]);
    }

    mysql_free_result(res);

}

void add_staff(MYSQL *conn){
struct Staff staff;

printf("Enter Staff's first name\n");
scanf("%s", staff.firstname);

printf("Enter Staff's Last name\n");
scanf("%s", staff.lastname);

printf("Enter Aadhar Number\n");
scanf("%lld", &staff.uid);
    
printf("Enter Role\n");
scanf("%s", &staff.work);

printf("Enter Gender\n");
scanf(" %c", &staff.gender);

char query[255];
sprintf(query,"INSERT INTO staff(firstname, lastname, uid, work, gender)VALUES('%s', '%s', %lld, '%s', '%c')", staff.firstname, staff.lastname, staff.uid, staff.work, staff.gender);

if(mysql_query(conn, query)){
    fprintf(stderr,"Error: %s\n",mysql_error(conn));
    return;
}

printf("Staff Added sucessfully.");
}

void view_staff(MYSQL *conn){
    MYSQL_RES *res;
    MYSQL_ROW row;

    if(mysql_query(conn, "SELECT * FROM staff")){
        fprintf(stderr,"Error: %s\n", mysql_error(conn));
        return;
    }

    res = mysql_store_result(conn);
    if(res == NULL){
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return;
    }

    while(row = mysql_fetch_row(res)){
        printf("Name: %s %s(%c)\n", row[0], row[1], row[4]);
        printf("Aadhar Number: %s\n", row[2]);
        printf("Work: %s\n\n", row[3]);
    }
    
    mysql_free_result(res);

}
