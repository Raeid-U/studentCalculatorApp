#pragma once
#include <vector>

class FinalGradeCalculator
{
public:
    static double calculateFinalGrade(const std::vector<double> &grades, const std::vector<double> &weights);
};
