#include "GPACalculator.h"

double GPACalculator::calculateGPA(const std::vector<std::string> &courses, const std::vector<double> &grades)
{
    double totalGradePoints = 0.0;
    double totalCredits = 0.0;

    for (size_t i = 0; i < courses.size(); ++i)
    {
        double grade = grades[i];
        double credit = 3.0; // Assuming each course has 3 credits, you can modify this according to your system

        // Convert grade to GPA
        double gpa;
        if (grade >= 93)
        {
            gpa = 4.0;
        }
        else if (grade >= 90)
        {
            gpa = 3.7;
        }
        else if (grade >= 87)
        {
            gpa = 3.3;
        }
        else if (grade >= 83)
        {
            gpa = 3.0;
        }
        else if (grade >= 80)
        {
            gpa = 2.7;
        }
        else if (grade >= 77)
        {
            gpa = 2.3;
        }
        else if (grade >= 73)
        {
            gpa = 2.0;
        }
        else if (grade >= 70)
        {
            gpa = 1.7;
        }
        else if (grade >= 67)
        {
            gpa = 1.3;
        }
        else if (grade >= 65)
        {
            gpa = 1.0;
        }
        else
        {
            gpa = 0.0;
        }

        totalGradePoints += gpa * credit;
        totalCredits += credit;
    }

    if (totalCredits == 0.0)
    {
        return 0.0; // Avoid division by zero
    }

    return totalGradePoints / totalCredits;
}
