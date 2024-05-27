#pragma once

#include <string>
#include <vector>

class GPACalculator
{
public:
    static double calculateGPA(const std::vector<std::string> &courses, const std::vector<double> &grades);
};
