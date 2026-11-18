AI-Assisted Student Record and Result Management System

Project Information

- SAP ID: 590037087
- Course: Programming in C (PRC1001)
- Program: B.Tech CSE, Semester I
- University: UPES
- Programming Language: C

Project Description

This is a console-based, menu-driven Student Record and Result Management System developed using C programming.

The system manages student details, calculates academic performance, sorts student records, and provides academic recommendations based on CGPA.

Features

1. Add student records.
2. Search students using SAP ID.
3. Calculate CGPA from available SGPA values.
4. Calculate average CGPA for each academic year.
5. Display all student records.
6. Delete individual student records.
7. Sort students by SAP ID.
8. Sort students alphabetically by name.
9. Provide CGPA-based academic advice.

Student Information

Each record contains:

- SAP ID
- Roll Number
- Name
- Phone Number
- Email ID
- Academic Year
- Semester
- SGPA values for up to eight semesters

AI-Assisted Academic Advisor

The academic advisor uses simple if-else conditions to provide recommendations based on CGPA.

CGPA Range| Recommendation
9.0–10.0| Excellent Performance
7.0–8.99| Good Performance
5.0–6.99| Needs Improvement
Below 5.0| Requires Immediate Attention

ChatGPT was used as a learning assistant to suggest academic-advice categories and support the development and testing process. The recommendations are generated locally by the C program without an external AI API.

How to Run

Compile the program using GCC:

gcc -std=c11 -Wall -Wextra 590037087.c -o student_system

Run the program:

./student_system

Testing

The project includes five fictional student records and automated testing using GitHub Actions.

Test files:

- "tests/sample_input.txt"
- "tests/sample_output.txt"

The automated workflow is located at ".github/workflows/test.yml".

Technologies Used

- C Programming
- GitHub
- GitHub Actions
- GCC Compiler
- ChatGPT (Learning Assistance)

Project Limitations

Student records are stored in memory and are not retained after the program exits.

Conclusion

This project demonstrates fundamental C programming concepts including structures, arrays, functions, loops, conditional statements, searching, sorting, and academic performance calculations.
