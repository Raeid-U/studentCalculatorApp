#pragma once

#include <vector>
#include <string>

class RequiredExamGrade
{
public:
    static void calculateRequiredGrades(double termWorkPercent, const std::vector<std::string> &names,
                                        const std::vector<double> &worthOfFinal, const std::vector<double> &required);
};
