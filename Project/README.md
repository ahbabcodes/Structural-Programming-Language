# Project: Organisation

`Organisation.c` is a menu-driven C program that stores details of one or more organisations together with their employees, then lets the user view, search, and summarise that data.

## ✨ Features

1. **Show all info** – prints every organisation and all of its employees.
2. **Search Employee by ID** – pick an organisation, enter an employee ID, and see that employee's full record.
3. **Statistics** – pick an organisation to see total salary, average salary, and minimum and maximum employee age.
4. **Exit**

## 🧾 Data Collected

**Organisation:** name, address, type, email, phone, website, founded year, number of employees.

**Employee:** ID, name, department, position, email, phone, age, joining date (DD MM YYYY), salary.

## ✅ Input Validation

- The number of organisations and employees per organisation must be at least 1.
- Employee IDs must be **unique** across all organisations; duplicates are rejected and re-asked.
- Salary cannot be negative.
- The organisation selection in the menu must be a valid number.

## 🧠 C Concepts Used

- `struct` definitions (`struct org`, `struct emp`)
- Variable-length arrays sized from user input
- `fgets` for reading text with spaces, and `strcspn` to strip the trailing newline
- A `flushInput()` helper to clear leftover input after `scanf`
- Passing a struct to a function (`printEmp`)
- `do-while` loops for input validation and the menu
- Nested loops and conditionals

## ▶️ How to Run

From the repository root:

```bash
gcc "Project/Organisation.c" -o organisation
```

**Windows**

```powershell
./organisation.exe
```

**Linux / macOS**

```bash
./organisation
```

## 💻 Sample Session

```text
Enter the number of organisations: 1

Enter details for Organisation 1:
Name: Tech Valley
Address: Sylhet
Type: Software
Email: info@tv.com
Phone: 01700000000
Website: tv.com
Founded Year: 2015

Enter the number of employees for that organisation: 2
...

1. Show all info
2. Search Employee by id
3. Statistics
4. Exit
Enter your choice: 3

1. Tech Valley
Select an organisation: 1
Total Salary: 90000.00
Average Salary: 45000.00
Minimum Age: 25
Maximum Age: 30
```

## 📝 Notes

- Field lengths are fixed (for example, names are limited to 49 characters), so very long input will be cut off.
- Everything lives in memory; data is not saved to a file when the program exits.
