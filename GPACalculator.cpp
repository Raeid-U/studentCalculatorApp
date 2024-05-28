#include "GPACalculator.h"
#include <numeric>

double GPACalculator::calculateGPA(const std::vector<double> &grades)
{
    double averageGrade = std::accumulate(grades.begin(), grades.end(), 0.0) / grades.size();

    if (averageGrade >= 93)
        return 4.0;
    if (averageGrade >= 90)
        return 3.7;
    if (averageGrade >= 87)
        return 3.3;
    if (averageGrade >= 83)
        return 3.0;
    if (averageGrade >= 80)
        return 2.7;
    if (averageGrade >= 77)
        return 2.3;
    if (averageGrade >= 73)
        return 2.0;
    if (averageGrade >= 70)
        return 1.7;
    if (averageGrade >= 67)
        return 1.3;
    if (averageGrade >= 65)
        return 1.0;
    return 0.0;
}
