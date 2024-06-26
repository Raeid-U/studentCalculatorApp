#include "FinalGradeCalculator.h"

double FinalGradeCalculator::calculateFinalGrade(const std::vector<double> &grades, const std::vector<double> &weights)
{
    double totalGrade = 0.0;
    double totalWeight = 0.0;

    // Implementation of Recursion to get all the course grades and weights
    for (size_t i = 0; i < grades.size(); ++i)
    {
        totalGrade += grades[i] * weights[i];
        totalWeight += weights[i];
    }

    // Ensures weight is never 0 or negative
    return totalWeight == 0.0 ? -1.0 : totalGrade / totalWeight;
}
