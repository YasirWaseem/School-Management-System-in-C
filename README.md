# School Management System

## Overview
This is a School Management System implemented in C. It provides functionalities to manage records of students, teachers, and staff members using text files for persistent data management.

## Features
- **Student Management**: Add and view student records.
- **Teacher Management**: Add and view teacher records.
- **Staff Management**: Add and view staff records.
- **File Handling**: Uses text files for data storage to ensure simple read/write operations.

## Technologies Used
- **Programming Language**: C
- **Data Storage**: Text files
- **Interface**: Command-Line Interface (CLI)

## Getting Started

### Prerequisites
- C Compiler (e.g., GCC)

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/YasirWaseem/School-Management-System-in-C.git
    ```
2. Navigate to the project directory:
    ```bash
    cd School-Management-System-in-C
    ```

### Usage
1. Compile the program:
    ```bash
    gcc main.c -o school_management_system
    ```
2. Run the program:
    ```bash
    ./school_management_system
    ```

### Sample Usage
1. On running the program, you will be presented with a menu:
    ```plaintext
    1. View Students        2. Add Student
    3. View Faculties       4. Add Faculties
    5. View Staffs          6. Add Staffs
    0. Exit the program

    Enter Choice
    ```
2. Follow the prompts to add records, view records, and navigate through the menu.

### File Structure
- `main.c`: The main source file containing the implementation of the system.
- `Students.txt`: Text file for storing student records.
- `Teacher.txt`: Text file for storing teacher records.
- `Staff.txt`: Text file for storing staff records.

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
