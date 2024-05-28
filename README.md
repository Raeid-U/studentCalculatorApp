# Student Grade Calculator

This program helps students calculate their final grades, GPA, and the required exam grades to achieve desired course outcomes. It provides an interactive terminal-based interface for easy input and computation.

## Compilation

To compile the program, use the following command in your terminal:

```bash
g++ -o StudentCalculatorApp main.cpp FinalGradeCalculator.cpp GPACalculator.cpp RequiredExamGradeCalculator.cpp
```

This command compiles the source files (`main.cpp`, `FinalGradeCalculator.cpp`, `GPACalculator.cpp`, `RequiredExamGradeCalculator.cpp`) and generates an executable named `StudentCalculatorApp`.

## Running the Program

After compiling, you can run the program with the following command:

```bash
./StudentCalculatorApp
```

This command executes the compiled program and starts the student grade calculator.

## Program Functions

The program offers three main functions:

1. **Final Grade Calculator**
2. **GPA Calculator**
3. **Required Exam Grade Calculator**

### Final Grade Calculator

This function calculates the final grade for a course based on the grades and weights of individual assignments.

#### How It Works

1. Prompts for the number of assignments.
2. Collects the grade and weight for each assignment.
3. Computes the weighted average to determine the final grade.

#### Example

```cpp
// Pseudocode for clarity
int numAssignments = 3;
vector<double> grades = {85.0, 90.0, 75.0};
vector<double> weights = {0.3, 0.3, 0.4};
double finalGrade = calculateFinalGrade(grades, weights);
cout << "Final Grade: " << finalGrade << "%" << endl;
```

#### Visual

```
 ___________________________
|                           |
|   Final Grade Calculator  |
|___________________________|

Enter the number of assignments completed in the course: 3
Enter the grade (as a percent) for assignment 1: 85
Enter the weight for assignment 1: 30
Enter the grade (as a percent) for assignment 2: 90
Enter the weight for assignment 2: 30
Enter the grade (as a percent) for assignment 3: 75
Enter the weight for assignment 3: 40
Final Grade: 82%
```

### GPA Calculator

This function calculates the GPA (Grade Point Average) for a semester based on the final grades of individual courses.

#### How It Works

1. Prompts for the number of courses.
2. Collects the final grade for each course.
3. Computes the average grade and converts it to a GPA.

#### Example

```cpp
// Pseudocode for clarity
int numCourses = 4;
vector<double> grades = {85.0, 90.0, 78.0, 88.0};
double gpa = calculateGPA(grades);
cout << "GPA: " << gpa << endl;
```

#### Visual

```
 ___________________________
|                           |
|      GPA Calculator       |
|___________________________|

Enter the number of courses: 4
Enter the final grade (as a percent) for course 1: 85
Enter the final grade (as a percent) for course 2: 90
Enter the final grade (as a percent) for course 3: 78
Enter the final grade (as a percent) for course 4: 88
Final Average: 85.25%
GPA: 3.3
```

### Required Exam Grade Calculator

This function calculates the minimum grade needed on final assessments to achieve a desired overall course grade.

#### How It Works

1. Prompts for the current term grade.
2. If applicable, collects the summative grade.
3. Asks for the desired overall grade.
4. Computes the required exam grade.

#### Example

```cpp
// Pseudocode for clarity
double termGrade = 80.0;
double summativeGrade = 85.0;
double desiredGrade = 90.0;
double requiredExamGrade = calculateRequiredExamGrade(termGrade, summativeGrade, desiredGrade);
cout << "Required Exam Grade: " << requiredExamGrade << "%" << endl;
```

#### Visual

```
 ___________________________
|                           |
| Required Exam Calculator  |
|___________________________|

Enter your term grade (as a percentage): 80
Enter your summative grade (as a percentage): 85
Enter the desired grade in the course: 90
To achieve 90% in the course, you need to get 95% on the exam.
```

## Conclusion

The Student Grade Calculator is a comprehensive tool that aids in computing final grades, GPA, and required exam grades through an intuitive terminal interface. This tool can be especially useful for students aiming to understand and track their academic performance.

### Code Repository

For the complete source code and more details, visit the [GitHub repository](https://github.com/Raeid-U/studentCalculatorApp.git).
