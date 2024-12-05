# School Management System

## Overview
This is a School Management System implemented in C and MySQL. It provides functionalities to manage records of students, teachers, and staff members using a relational database for persistent data management.

## Features
- **Student Management**: Add and view student records.
- **Teacher Management**: Add and view teacher records.
- **Staff Management**: Add and view staff records.
- **Database**: Uses MySQL database for data storage.
  
## Technologies Used
- **Programming Language**: C
- **Database**: MySQL
- **Interface**: Command-Line Interface (CLI)

## Getting Started

### Prerequisites
- C Compiler (e.g., GCC)
- MySQL Database
- MySQL Connector for C

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/YasirWaseem/School-Management-System-in-C.git
    ```
2. Navigate to the project directory:
    ```bash
    cd School-Management-System-in-C
    ```

### MySQL Database Setup
Before running the program, set up the MySQL database using the following steps:

1. Open MySQL and create the database:
    ```sql
    -- Create the 'college' database
    CREATE DATABASE college;

    -- Switch to the 'college' database
    USE college;

    -- Create the 'student' table
    CREATE TABLE student (
        firstname VARCHAR(15),
        lastname VARCHAR(15),
        roll INT,
        uid BIGINT,
        department VARCHAR(15),
        gender CHAR(1)
    );

    -- Create the 'teacher' table
    CREATE TABLE teacher (
        firstname VARCHAR(15),
        lastname VARCHAR(15),
        uid BIGINT,
        department VARCHAR(30),
        gender CHAR(1)
    );

    -- Create the 'staff' table
    CREATE TABLE staff (
        firstname VARCHAR(15),
        lastname VARCHAR(15),
        uid BIGINT,
        work VARCHAR(30),
        gender CHAR(1)
    );
    ```
2. Ensure that your MySQL server is running.

### Usage
1. Compile the program:
    ```bash
    gcc school_management_system.c -o school_management_system `mysql_config --cflags --libs`
    ```
2. Run the program:
    ```bash
    ./school_management_system
    ```

### Sample Usage
1. On running the program, you will be presented with a menu:
    ```plaintext
    1. View Students        2. Add Student
    3. View Teachers        4. Add Teacher
    5. View Staff           6. Add Staff
    0. Exit the program

    Enter Choice
    ```
2. Follow the prompts to add records, view records, and navigate through the menu.

### File Structure
- `school_management_system.c`: The main source file containing the implementation of the system.
- `database_setup.sql`: SQL script for creating the database and tables.
- `Makefile`: For compiling the project if desired (optional).
  
## Contributing
1. Fork the repository.
2. Create your feature branch:
    ```bash
    git checkout -b feature/your-feature
    ```
3. Commit your changes:
    ```bash
    git commit -m 'Add your feature'
    ```
4. Push to the branch:
    ```bash
    git push origin feature/your-feature
    ```
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
