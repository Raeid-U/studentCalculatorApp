#include "GPACalculator.h"

double GPACalculator::calculateGPA(const std::vector<double> &grades)
{
    double totalGradePoints = 0.0;
    double numCourses = static_cast<double>(grades.size());

    for (size_t i = 0; i < grades.size(); ++i)
    {
        totalGradePoints += grades[i];
    }

    double averageGrade = totalGradePoints / numCourses;

    double gpa;

    if (averageGrade >= 93)
    {
        gpa = 4.0;
    }
    else if (averageGrade >= 90)
    {
        gpa = 3.7;
    }
    else if (averageGrade >= 87)
    {
        gpa = 3.3;
    }
    else if (averageGrade >= 83)
    {
        gpa = 3.0;
    }
    else if (averageGrade >= 80)
    {
        gpa = 2.7;
    }
    else if (averageGrade >= 77)
    {
        gpa = 2.3;
    }
    else if (averageGrade >= 73)
    {
        gpa = 2.0;
    }
    else if (averageGrade >= 70)
    {
        gpa = 1.7;
    }
    else if (averageGrade >= 67)
    {
        gpa = 1.3;
    }
    else if (averageGrade >= 65)
    {
        gpa = 1.0;
    }
    else
    {
        gpa = 0.0;
    }

    return gpa;
}
