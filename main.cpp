#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <cstdlib>
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
    std::cout << " ____________________________\n";
    std::cout << "|                            |\n";
    std::cout << "|  Required Grade Calculator |\n";
    std::cout << "|____________________________|\n\n";

    RequiredGradeCalculator::calculateRequiredGrade();
}

void gpaCalculator()
{
    const int numUniversities = 50;
    std::string universities[numUniversities] = {
        "Lethbridge University", "University of Windsor", "Ontario Tech University", "UQAM", "Bishop's University", "Trent University", "University of Winnipeg", "Brock University",
        "Laurentian University", "Lakehead University", "York University", "Concordia University", "Cape Breton University", "Acadia University", "Mount Saint Vincent University",
        "Nipissing University", "Saint Mary's University", "Carleton University", "Wilfrid Laurier University", "University of Ottawa", "University of Moncton", "Regina University",
        "St. Thomas University", "Laval University", "Memorial University", "University of New Brunswick", "UPEI", "University of Toronto", "Mount Allison University",
        "Brandon University", "Sherbrooke University", "UNBC", "University of Guelph", "St. Francis Xavier University", "Simon Fraser University", "Toronto Metropolitan University",
        "University of Saskatchewan", "Dalhousie University", "University of Montréal", "University of Calgary", "University of Alberta", "Victoria University", "McGill University", "McMaster University",
        "Queen's University", "Western University", "Waterloo University", "University of Manitoba", "University of Northern British Columbia", "University of Prince Edward Island"};

    float entranceGrades[numUniversities] = {
        62.4, 74.2, 84.3, 85.0, 85.2, 85.2, 85.4, 85.5, 85.6, 85.7, 85.9, 86.0, 86.4, 86.5, 86.7,
        86.8, 86.8, 86.9, 87.0, 87.2, 87.3, 87.3, 87.3, 87.6, 87.6, 87.6, 87.7, 87.9, 88.0, 88.1,
        88.1, 88.2, 88.3, 88.4, 88.7, 89.1, 89.2, 89.3, 89.5, 89.7, 89.9, 90.5, 92.0, 92.0, 92.2,
        92.2, 92.6, 92.8, 90.0, 88.6};

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

    char choice;
    std::cout << "Do you want to see which universities you can get into with your average? (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        bool found = false;
        for (int i = 0; i < numUniversities; ++i)
        {
            if (average >= entranceGrades[i])
            {
                if (!found)
                {
                    std::cout << "Here are the Universities you can get into with an average of " << average << "%:\n";
                    std::cout << "Name - Entrance Average\n";
                }
                std::cout << universities[i] << " - " << entranceGrades[i] << "%\n";
                found = true;
            }
        }
        if (!found)
        {
            std::cout << "There are no Universities in Canada that would accept you based solely on your average. Try to get your grades up!\n";
        }
    }
}

int main()
{
    char runAgain;
    do
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

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
    } while (runAgain == 'y' || runAgain == 'Y');

    return 0;
}
