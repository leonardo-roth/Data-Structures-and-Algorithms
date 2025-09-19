# Student Management System (TP1)

This project is a practical assignment for the Data Structures II course at the Universidade Federal da Fronteira Sul (UFFS).

This project implements a student management system in C that uses binary files for data persistence. The system allows performing CRUD (Create, Read, Update, Delete) operations on student records.

## How to Compile and Run

### Prerequisites

- C compiler (gcc)

### Compilation

```bash
gcc main.c operacoes_alunos.c arquivo_utils.c -o sistema_de_alunos
```

### Execution

```bash
./sistema_de_alunos
```

## How to Use

1. **Run the program**: The system will automatically create the `alunos.bin` file with 5 initial students
2. **Choose an option** from the interactive menu:
   - **Option 1**: Create new student
   - **Option 2**: Update student's average
   - **Option 3**: Delete a student
   - **Option 4**: List all students
   - **Option 5**: List a specific student
   - **Option 6**: Exit the system

## Technical Details

### Data Persistence

- Data is stored in binary file (`alunos.bin`)
- Uses `fwrite()` and `fread()` functions for I/O operations
- Implements logical deletion (field `ativo` = 0) instead of physical removal

### File Operations

- **Creation**: Mode `"ab"` (append binary)
- **Reading**: Mode `"rb"` (read binary)
- **Update**: Mode `"r+b"` (read + write binary)
- **Positioning**: Uses `fseek()` and `offsetof()` for direct access to specific fields

## Implemented Features

### `create_new_student()`

- Requests user data (ID, name, average)
- Validates input and creates new record
- Adds to binary file

### `print_all_students()`

- Lists all students with active status
- Displays ID, name and average

### `print_student_by_id(int id)`

- Searches and displays information of a specific student
- Shows all fields including active status

### `update_student_media(int id, float media)`

- Updates only the average field of a student
- Uses direct positioning in the file

### `delete_student(int id)`

- Performs logical deletion (marks as inactive)
- Preserves data for possible recovery

### `get_student_position(int id)`

- Helper function to locate a student's position in the file
- Returns index or -1 if not found

## Applied Data Structures Concepts

- **Binary files**: Efficient persistence of structured data
- **Structures (struct)**: Organization of related data
- **Sequential and random access**: Reading and writing in files
- **Logical deletion**: Technique to preserve historical data
- **Pointer manipulation**: Precise positioning in files
