#include "RequiredExamGradeCalculator.h"
#include <iostream>
#include <cmath>

void RequiredGradeCalculator::calculateRequiredGrade()
{
    std::vector<std::string> names;
    std::vector<double> weights;

    // Prompts the user to select if they have a summative or not
    int caseChoice;
    std::cout << "Select case:\n";
    std::cout << "1. Term, Summative, Exam\n";
    std::cout << "2. Term, Exam\n";
    std::cout << "Enter choice (1/2): ";
    std::cin >> caseChoice;

    // Initialize the Names
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

    // Convert weight from percentage to proportion
    for (size_t i = 0; i < names.size(); ++i)
    {
        double weight;
        std::cout << "Enter the weight for " << names[i] << ": ";
        std::cin >> weight;
        weights.push_back(weight / 100.0);
    }

    double termGrade;
    std::cout << "Enter your term grade (as a percentage): ";
    std::cin >> termGrade;

    double summativeGrade = 0.0;
    if (caseChoice == 1)
    {
        std::cout << "Enter your summative grade (as a percentage): ";
        std::cin >> summativeGrade;
    }

    // Calculates current grade based on grades and weights added
    double currentGrade = 0.0;
    if (caseChoice == 1)
    {
        currentGrade = termGrade * weights[0] + summativeGrade * weights[1];
    }
    else
    {
        currentGrade = termGrade * weights[0];
    }

    double desiredGrade;
    std::cout << "Enter the desired grade in the course: ";
    std::cin >> desiredGrade;

    // Calculates the Required Grade
    double gradeNeeded = (desiredGrade - currentGrade) / weights[weights.size() - 1];

    // Checks to see if the gradeneeded is over 100% or negative
    if (std::isnan(gradeNeeded) || gradeNeeded > 100 || gradeNeeded < 0)
    {
        std::cout << "That grade is unattainable with those marks.\n";
    }
    else
    {
        std::cout << "To achieve " << desiredGrade << "% in the course, you need to get " << gradeNeeded << "% on the exam.\n";
    }
}
