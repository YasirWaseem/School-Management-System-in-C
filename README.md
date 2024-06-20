# School-Management-System-in-C
Developed a school management system in C with file-based storage.
# School Management System

## Overview
This is a School Management System implemented in C. It provides functionalities to manage student and teacher records, class assignments, and grades, using binary file storage for persistent data management.

## Features
- **Student Management**: Add, view, modify, and delete student records.
- **Teacher Management**: Add, view, modify, and delete teacher records.
- **Class Management**: Assign students and teachers to classes.
- **Grade Management**: Record and view student grades.
- **File Handling**: Uses binary files for data storage to ensure efficient read/write operations.

## Technologies Used
- **Programming Language**: C
- **Data Storage**: Binary files
- **Interface**: Command-Line Interface (CLI)

## Getting Started

### Prerequisites
- C Compiler (e.g., GCC)

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/school-management-system.git
    ```
2. Navigate to the project directory:
    ```bash
    cd school-management-system
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
    School Management System
    1. Add Student
    2. View Students
    3. Save and Exit
    Enter your choice:
    ```
2. Follow the prompts to add students, view students, and save data.

### File Structure
- `main.c`: The main source file containing the implementation of the system.
- `students.dat`: Binary file for storing student records.
- `teachers.dat`: Binary file for storing teacher records.
- `classes.dat`: Binary file for storing class assignments and records.

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

## Acknowledgments
- [Any resources, tutorials, etc. that helped you]

