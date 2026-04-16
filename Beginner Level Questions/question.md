# C++ Practice Problems Master List

This document contains a comprehensive collection of C++ practice problems, categorized from absolute beginner revision to intermediate command-line workflows. This is perfect for building a foundational GitHub portfolio.

## Part 1: Absolute Beginner Revision
*Focus: Basic syntax, I/O, simple logic, and loops.*

1. **The Greeter (Basic I/O & Variables)**
   - **Task:** Write a program that asks the user for their name and their birth year. 
   - **Output:** Print a greeting and calculate their approximate age (assuming the current year).
   - **Example:** "Hello Alex, you are 22 years old."

2. **Safe Calculator (Arithmetic & Conditionals)**
   - **Task:** Ask the user to input two integers. Print their sum, difference, product, and quotient.
   - **The Catch:** Use an `if` statement to check if the second number is `0` before dividing. If it is `0`, print an error message instead of crashing.

3. **Temperature Check (If/Else If Logic)**
   - **Task:** Ask the user to input a temperature in Celsius.
   - **Logic:** If it's below 0, print "Freezing". If it's between 0 and 30, print "Normal". If it's above 30, print "Hot".

4. **Count to N (For Loops)**
   - **Task:** Ask the user for a positive integer `N`. 
   - **Output:** Use a `for` loop to print all numbers from 1 up to `N` on a single line, separated by spaces.

5. **First and Last (Basic Arrays)**
   - **Task:** Create an array of 5 integers. Ask the user to input 5 numbers to fill the array. 
   - **Output:** Print only the very first number and the very last number in the array.

---

## Part 2: Core Fundamentals
*Focus: Control flow, data structures, and modular functions.*

### Variables & Basic I/O
* **Temperature Converter:** Write a program that converts Celsius to Fahrenheit and vice versa.
* **Swap Two Numbers:** Swap the values of two variables first using a third (temporary) variable, and then try doing it *without* using a third variable.
* **Area of a Circle:** Ask the user for a radius and calculate the area and circumference of a circle. 

### Control Flow (If/Else & Switch)
* **Even or Odd:** Write a program that takes an integer and determines if it is even or odd.
* **Largest of Three:** Input three numbers and find the maximum using nested `if` statements.
* **Leap Year Checker:** Create a program to check if a given year is a leap year based on standard leap year rules.
* **Simple Calculator:** Use a `switch` statement to create a calculator that performs addition, subtraction, multiplication, and division based on an operator entered by the user (`+`, `-`, `*`, `/`).

### Loops (For, While, Do-While)
* **Multiplication Table:** Print the multiplication table for a number provided by the user up to 10.
* **Factorial:** Calculate the factorial of a given positive integer (e.g., 5! = 5 * 4 * 3 * 2 * 1).
* **Fibonacci Series:** Print the first `n` terms of the Fibonacci sequence, where `n` is given by the user.
* **Prime Number Checker:** Write a loop to check whether a given integer is a prime number.
* **Reverse a Number:** Take an integer input (e.g., 1234) and print it in reverse (4321) using a `while` loop.

### Arrays & Strings
* **Array Sum and Average:** Create an array of integers, then calculate and print the sum and average of its elements.
* **Min and Max in Array:** Iterate through an array to find the smallest and largest numbers.
* **Reverse a String:** Take a string input from the user and print it backward.
* **Palindrome Checker:** Check if a given string reads the same forwards and backwards (e.g., "radar").

### Functions
* **Power Function:** Write a custom function `power(base, exponent)` that calculates the power of a number without using the `<cmath>` library.
* **Pass by Value vs. Reference:** Write a program with two functions—one that modifies a variable passed by value, and another that modifies a variable passed by reference—to demonstrate the difference.

---

## Part 3: Command-Line & Systems Workflow
*Focus: CLI inputs, memory management, and file I/O.*

1. **The Collatz Sequence**
   - **The Task:** Write a program that takes a positive integer `n` as a command-line input (`argv[1]`). If `n` is even, divide it by 2. If `n` is odd, multiply it by 3 and add 1. Repeat this process, printing each number, until `n` becomes 1.
   - **The Goal:** Master `while` loops, modulo arithmetic, and taking inputs directly from the execution command instead of using `cin`.

2. **Simple Moving Average (Sliding Window)**
   - **The Task:** Hardcode an array of floats representing simulated price data. Write a function that takes this array and an integer `k` (the window size) and prints the moving average for every window of size `k`.
   - **The Goal:** Understand array traversal, boundary conditions (preventing segmentation faults), and algorithmic efficiency.

3. **Matrix Transpose (Flat Array Mapping)**
   - **The Task:** Represent a 3x3 matrix mathematically, but store it in code as a single 1D array of 9 elements. Write a program to transpose the matrix in place and print the before and after states.
   - **The Goal:** Master pointer arithmetic and index mapping (accessing 2D coordinates in a 1D array).

4. **The CLI Flag Parser**
   - **The Task:** Write a program that parses standard terminal flags. If you execute `./parser -v -n 10 --fast`, the program should iterate through `argc` and `argv`, identify the flags, and print out: "Verbose mode: ON. Count: 10. Fast mode: ON."
   - **The Goal:** Handle C-style strings (`char*`) and string comparisons in C++.

5. **The Log Extractor**
   - **The Task:** Create a dummy `.txt` file with lines of text, some containing the word "ERROR" and others containing "INFO". Write a C++ program that reads this file line-by-line and writes only the lines containing "ERROR" to a new file called `errors.log`.
   - **The Goal:** Master the `<fstream>` library for reading and writing files.