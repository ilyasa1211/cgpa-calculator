#include <vector>

class GPA
{
private:
    int totalCredits = 0;
    float totalPoints = 0.0f;
    std::vector<int> creditHours;
    std::vector<float> creditPoints;

public:
    int getTotalCreditHours()
    {
        return this->totalCredits;
    }
    float getTotalPoints()
    {
        return this->totalPoints;
    }

    std::vector<int> getCreditHours()
    {
        return this->creditHours;
    }
    std::vector<float> getCreditPoints()
    {
        return this->creditPoints;
    }
    void inputCreditPoint(float grade, int creditHours)
    {
        float creditPoint = grade * creditHours;

        this->totalCredits += creditHours;
        this->totalPoints += creditPoint;
        this->creditHours.push_back(creditHours);
        this->creditPoints.push_back(creditPoint);
    }
    float calculateGPA()
    {
        return this->totalPoints / this->totalCredits;
    }
};