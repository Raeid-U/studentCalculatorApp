#include <iostream>
#include <vector>
#include <cmath>
#include "RequiredExamGradeCalculator.h"

void RequiredGradeCalculator::calculateRequiredGrade()
{
    std::vector<std::string> names;
    std::vector<double> weights;

    int caseChoice;
    std::cout << "Select case:\n";
    std::cout << "1. Term, Summative, Exam\n";
    std::cout << "2. Term, Exam\n";
    std::cout << "Enter choice (1/2): ";
    std::cin >> caseChoice;

    if (caseChoice == 1)
    {
        names.push_back("Term");
        names.push_back("Summative");
        names.push_back("Exam");
    }
    else if (caseChoice == 2)
    {
        names.push_back("Term");
        names.push_back("Exam");
    }
    else
    {
        std::cout << "Invalid choice\n";
        return;
    }

    for (size_t i = 0; i < names.size(); ++i)
    {
        double weight;
        std::cout << "Enter the weight for " << names[i] << ": ";
        std::cin >> weight;
        weights.push_back(weight / 100.0); // Convert weight from percentage to proportion
    }

    // Calculate weight achieved
    double termGrade;
    std::cout << "Enter your term grade (as a percentage): ";
    std::cin >> termGrade;

    double summativeGrade = 0.0;
    if (caseChoice == 1)
    {
        std::cout << "Enter your summative grade (as a percentage): ";
        std::cin >> summativeGrade;
    }

    // Calculate current grade
    double currentGrade;
    if (caseChoice == 1)
    {
        currentGrade = termGrade * weights[0] + summativeGrade * weights[1];
    }
    else
    {
        currentGrade = termGrade * weights[0];
    }

    // Ask for desired grade
    double desiredGrade;
    std::cout << "Enter the desired grade in the course: ";
    std::cin >> desiredGrade;

    // Calculate required exam grade
    double gradeNeeded = (desiredGrade - currentGrade) / weights.back(); // Correctly account for exam weight

    if (std::isnan(gradeNeeded) || gradeNeeded > 100 || gradeNeeded < 0)
    {
        std::cout << "That grade is unattainable with those marks.\n";
    }
    else
    {
        std::cout << "To achieve " << desiredGrade << "% in the course, you need to get " << gradeNeeded << "% on the exam.\n";
    }
}
