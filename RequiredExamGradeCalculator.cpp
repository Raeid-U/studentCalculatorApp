#include "RequiredExamGradeCalculator.h"
#include <iostream>
#include <iomanip>

void RequiredExamGrade::calculateRequiredGrades(double termWorkPercent, const std::vector<std::string> &names,
                                                const std::vector<double> &worthOfFinal, const std::vector<double> &required)
{
    double remainingPercent = 100.0 - termWorkPercent;
    double currentPercent = termWorkPercent;

    std::cout << "\nTerm Work - " << termWorkPercent << "% | Worth " << termWorkPercent << "% of Final\n";

    for (size_t i = 0; i < names.size(); ++i)
    {
        std::cout << "[" << names[i] << "] - ";

        double requiredGrade = (required[i] - currentPercent * worthOfFinal[i] / 100.0) / (worthOfFinal[i] / 100.0);
        if (requiredGrade < 0)
        {
            requiredGrade = 0;
        }

        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "\033[1m" << requiredGrade << "%" << "\033[0m"; // Bold required grade
        std::cout << " | Worth " << worthOfFinal[i] << "% of Final\n";

        remainingPercent -= worthOfFinal[i];
        currentPercent += worthOfFinal[i];
    }
}
