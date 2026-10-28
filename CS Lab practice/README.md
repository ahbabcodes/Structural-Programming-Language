# CS Lab Practice

Programs written for university **Computer Science / Structured Programming lab** sessions, plus extra practice on the same topics.

## 📂 Programs

### Lab problems

| File | What it does |
| --- | --- |
| `CS Lab problem-1.c` | Prints a string containing special Unicode characters |
| `CS Lab problem-2.c` | Prints text laid out in a specific multi-line pattern using `\n` and spaces |
| `CS Lab problem-3.c` | Prints a star pattern |

### Practice programs

| File | Topic | What it does |
| --- | --- | --- |
| `Summation.c` | Input / arithmetic | Reads three integers and prints their sum |
| `Comparison between numbers.c` | Conditionals | Finds the largest of three numbers and prints the sum |
| `Multiple Variables.c` | Variables | Declares several variables in one line and adds them |
| `Loop.c` | Loops | Factorial-based nCr practice using `for` loops |
| `Factorial.c` | Loops | Computes n!, r!, and (n−r)! and combines them |
| `ncr.c` | Loops / math | Computes nCr = n! / (r!(n−r)!) |
| `Binomial expansion.c` | Loops / math | Builds on nCr for binomial coefficients |
| `nested loop.c` | Nested loops | Prints a decreasing triangle of stars |
| `function.c` | Functions | Six functions: addition, polynomial, sum of squares, factorial, nCr, sum of 1..n |
| `recursion.c` | Recursion | Recursive function `f(n) = n² + f(n−2)` for odd `n`, base case `f(3) = 9` |
| `string.c` | Strings | Reads a string, then prints its length and each character |
| `structure.c` | Structures | Defines a `student` struct and prints its fields |
| `Storing Student Information through Structure.c` | Structures / arrays | Stores name, roll, and GPA for 3 students using an array of structs |

## ▶️ How to Run

From the repository root:

```bash
gcc "CS Lab practice/recursion.c" -o recursion
./recursion
```

On Windows, run `./recursion.exe` instead. Remember to keep the quotes around paths with spaces.
