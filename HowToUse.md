# Student Grade Calculator

This program allows you to perform various calculations related to student grades, including calculating final grades, GPA, and required exam grades.

## Compilation

To compile the program, use the following command in your terminal:

`g++ -o StudentCalculatorApp main.cpp FinalGradeCalculator.cpp GPACalculator.cpp RequiredExamGradeCalculator.cpp`

This command compiles all the source code files (`main.cpp`, `FinalGradeCalculator.cpp`, `GPACalculator.cpp`, `RequiredExamGradeCalculator.cpp`) and generates an executable named `student-grade-calculator`.

## Running the Program

After compiling the program, you can run it using the following command:

`./StudentCalculatorApp`

This command executes the compiled executable and launches the program.

## Program Functions

### Final Grade Calculator

The Final Grade Calculator function allows you to calculate the final grade for a course based on the grades and weights of individual assignments. It prompts the user to input the number of assignments completed in the course, the grade (as a percentage) for each assignment, and the weight of each assignment. It then calculates and displays the final grade for the course.

### GPA Calculator

The GPA Calculator function enables you to calculate the GPA (Grade Point Average) for a semester. It prompts the user to input the number of courses, the name and final grade (as a percentage) for each course. It calculates and displays the GPA based on the provided grades.

### Required Exam Grade Calculator

The Required Exam Grade Calculator function helps you determine the minimum grade needed on final assessments to achieve a desired overall grade in a course. It prompts the user to input the percentage of the final grade based on term work, the number of final assessments, the name, percentage of the final grade, and the required grade for each assessment. It then calculates and displays the required grades for each assessment.
