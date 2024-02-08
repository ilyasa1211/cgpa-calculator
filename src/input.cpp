#include <iostream>

class Input
{
public:
    static void getInput(const char *str, float &result)
    {
        std::cout << str;
        std::cin >> result;
    }

    static int getInputCredit()
    {
        float creditHours;
        getInput("Credits Hours: ", creditHours);

        return creditHours;
    }

    static float getInputGradePoint()
    {
        float gradePoints;
        getInput("Grade Points: ", gradePoints);

        return gradePoints;
    }
};