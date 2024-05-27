#include "FinalGradeCalculator.h"

double FinalGradeCalculator::calculateFinalGrade(const std::vector<double> &grades, const std::vector<double> &weights)
{
    double totalGrade = 0.0;
    double totalWeight = 0.0;

    for (size_t i = 0; i < grades.size(); ++i)
    {
        totalGrade += grades[i] * weights[i];
        totalWeight += weights[i];
    }

    if (totalWeight == 0.0)
    {
        return -1.0; // Avoid division by zero
    }

    double finalGrade = totalGrade / totalWeight;

    return finalGrade;
}
