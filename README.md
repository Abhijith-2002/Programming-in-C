# C Programming Lab Solutions

This repository contains a collection of C programs developed for a college-level programming lab. The programs cover fundamental concepts of C, including basic arithmetic, conditional logic, loops, number theory, and introductory algorithms like searching and sorting.

## 📋 Table of Contents

1.  [**How to Compile & Run**](#how-to-compile--run)
2.  [**List of Programs**](#list-of-programs)
    * [Basic Arithmetic & I/O](#basic-arithmetic--io)
    * [Conditional Logic & Decision Making](#conditional-logic--decision-making)
    * [Loops & Number Theory](#loops--number-theory)
    * [Arrays, Searching & Sorting](#arrays-searching--sorting)

---

## How to Compile & Run

To compile and run any of the programs in this repository, you will need a C compiler, such as **GCC (GNU Compiler Collection)**, installed on your system.

**General Steps:**

1.  **Open a terminal or command prompt.**
2.  **Navigate to the directory** containing the C file you want to run.
3.  **Compile the file** using the `gcc` command. For example, to compile `prime.c`:
    ```bash
    gcc prime.c -o prime
    ```
    This command compiles `prime.c` and creates an executable file named `prime`.
4.  **Run the executable:**
    ```bash
    ./prime
    ```
Specific commands for each program are provided below.

---

## List of Programs

### Basic Arithmetic & I/O

* **`area_of_circle.c`**: Calculates the area of a circle given its radius.
* **`calculator.c`**: A simple calculator that performs addition, subtraction, multiplication, and division.
* **`sum_of_digits.c`**: Finds the sum of the digits of a given number and counts the number of digits.

### Conditional Logic & Decision Making

* **`odd_even.c`**: Checks if a given integer is odd or even.
* **`leap_year.c`**: Determines whether a given year is a leap year.
* **`grades.c`**: Assigns a grade based on a student's marks.
* **`greatest_of_three.c`**: Finds the largest among three input numbers.
* **`quadrant.c`**: Identifies the quadrant in which a given coordinate (x, y) lies.
* **`quadratic_roots.c`**: Calculates the roots of a quadratic equation.
* **`vowels.c`**: Checks if a given character is a vowel or a consonant.

### Loops & Number Theory

* **`factorial.c`**: Computes the factorial of a non-negative integer.
* **`fibonacci.c`**: Prints the first `n` terms of the Fibonacci sequence.
* **`prime.c`**: Checks if a given number is a prime number.
* **`armstrong.c`**: Determines if a number is an Armstrong number.

### Arrays, Searching & Sorting

* **`linear_search.c`**: Implements a linear search to find an element in an array.
* **`bubble_sort.c`**: Sorts an array of integers in ascending order using the bubble sort algorithm.
