#include <iostream>
#include <vector>
#include "FinalGradeCalculator.h"
#include "GPACalculator.h"
#include "RequiredExamGradeCalculator.h"

int main()
{
    std::cout << "Student Grade Calculator\n\n";

    std::cout << "Select a function:\n";
    std::cout << "1. Final Grade Calculator\n";
    std::cout << "2. Required Exam Grade Calculator\n";
    std::cout << "3. GPA Calculator\n";
    std::cout << "Enter choice (1/2/3): ";

    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        // Final Grade Calculator
        std::cout << "Final Grade Calculator\n\n";

        int numAssignments;
        std::cout << "Enter the number of assignments completed in the course: ";
        std::cin >> numAssignments;

        std::vector<double> grades(numAssignments);
        std::vector<double> weights(numAssignments);

        for (int i = 0; i < numAssignments; ++i)
        {
            std::cout << "Enter the grade (as a percent) for assignment " << (i + 1) << ": ";
            std::cin >> grades[i];
            std::cout << "Enter the weight for assignment " << (i + 1) << ": ";
            std::cin >> weights[i];
        }

        double finalGrade = FinalGradeCalculator::calculateFinalGrade(grades, weights);
        if (finalGrade >= 0.0)
        {
            std::cout << "Final Grade: " << std::round(finalGrade) << "%\n"; // Round the final grade
        }
        else
        {
            std::cout << "Calculation failed\n";
        }
        break;
    }

    case 2:
    {
        // Required Exam Grade Calculator
        std::cout << "Required Exam Grade Calculator\n\n";

        // Placeholder comment
        std::cout << "Required Exam Grade Calculator functionality to be implemented.\n";

        break;
    }

    case 3:
    {
        // GPA Calculator
        std::cout << "GPA Calculator\n\n";

        int numCourses;
        std::cout << "Enter the number of courses: ";
        std::cin >> numCourses;

        std::vector<std::string> courses(numCourses);
        std::vector<double> grades(numCourses);

        for (int i = 0; i < numCourses; ++i)
        {
            std::cout << "Enter the course name for course " << (i + 1) << ": ";
            std::cin >> courses[i];
            std::cout << "Enter the final grade (as a percent) for course " << (i + 1) << ": ";
            std::cin >> grades[i];
        }

        // Display each course name and grade achieved
        std::cout << "\nCourse Grades:\n";
        for (int i = 0; i < numCourses; ++i)
        {
            std::cout << courses[i] << " : " << grades[i] << "%\n";
        }

        // Calculate GPA
        double gpa = GPACalculator::calculateGPA(courses, grades);
        std::cout << "\nPercent Average: " << gpa << "%\n";

        // Display GPA
        std::cout << "GPA: ";

        // Assign GPA based on percent average
        if (gpa >= 93)
        {
            std::cout << "4.0\n";
        }
        else if (gpa >= 90)
        {
            std::cout << "3.7\n";
        }
        else if (gpa >= 87)
        {
            std::cout << "3.3\n";
        }
        else if (gpa >= 83)
        {
            std::cout << "3.0\n";
        }
        else if (gpa >= 80)
        {
            std::cout << "2.7\n";
        }
        else if (gpa >= 77)
        {
            std::cout << "2.3\n";
        }
        else if (gpa >= 73)
        {
            std::cout << "2.0\n";
        }
        else if (gpa >= 70)
        {
            std::cout << "1.7\n";
        }
        else if (gpa >= 67)
        {
            std::cout << "1.3\n";
        }
        else if (gpa >= 65)
        {
            std::cout << "1.0\n";
        }
        else
        {
            std::cout << "0.0\n";
        }

        break;
    }
    default:
        std::cout << "Invalid choice\n";
        break;
    }

    return 0;
}
