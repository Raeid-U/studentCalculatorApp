#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib> // Include this for system() function
#include "FinalGradeCalculator.h"
#include "GPACalculator.h"
#include "RequiredExamGradeCalculator.h"

void displayMenu()
{
    std::cout << " ____________________________\n";
    std::cout << "|                            |\n";
    std::cout << "|   Student Grade Calculator |\n";
    std::cout << "|____________________________|\n";
    std::cout << "| Select a function:         |\n";
    std::cout << "| 1. Final Grade Calculator  |\n";
    std::cout << "| 2. Required Exam Calculator|\n";
    std::cout << "| 3. GPA Calculator          |\n";
    std::cout << "|____________________________|\n";
    std::cout << "Enter choice (1/2/3): ";
}

void finalGradeCalculator()
{
    std::cout << " ___________________________\n";
    std::cout << "|                           |\n";
    std::cout << "|   Final Grade Calculator  |\n";
    std::cout << "|___________________________|\n\n";

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
}

void requiredExamGradeCalculator()
{
    std::cout << " ___________________________\n";
    std::cout << "|                           |\n";
    std::cout << "| Required Exam Calculator  |\n";
    std::cout << "|___________________________|\n\n";

    RequiredGradeCalculator::calculateRequiredGrade();
}

void gpaCalculator()
{
    std::cout << " ___________________________\n";
    std::cout << "|                           |\n";
    std::cout << "|      GPA Calculator       |\n";
    std::cout << "|___________________________|\n\n";

    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    std::vector<double> grades(numCourses);

    for (int i = 0; i < numCourses; ++i)
    {
        std::cout << "Enter the final grade (as a percent) for course " << (i + 1) << ": ";
        std::cin >> grades[i];
    }

    double gpa = GPACalculator::calculateGPA(grades);
    double average = std::accumulate(grades.begin(), grades.end(), 0.0) / grades.size();
    std::cout << "Final Average: " << average << "%\n";

    std::cout << "Final GPA: " << gpa << "\n";
}

int main()
{
    char runAgain;
    do
    {
        displayMenu();

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            finalGradeCalculator();
            break;
        case 2:
            requiredExamGradeCalculator();
            break;
        case 3:
            gpaCalculator();
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }

        std::cout << "Do you want to run the program again? (y/n): ";
        std::cin >> runAgain;

        if (runAgain == 'y' || runAgain == 'Y')
        {
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
        }
    } while (runAgain == 'y' || runAgain == 'Y');

    return 0;
}
