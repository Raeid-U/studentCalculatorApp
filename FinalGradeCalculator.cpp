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

    return totalWeight == 0.0 ? -1.0 : totalGrade / totalWeight;
}
