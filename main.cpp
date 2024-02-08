#include <iostream>

#include "./src/gpa.cpp"
#include "./src/input.cpp"
#include "./src/cgpa.cpp"

// check cGPA for a semester

void getGpa(const int& courseTaken, GPA& gpa);
void showMessage(const char* message, auto value);
void showOverallCourseGrade(GPA& gpa);
void showResultCgpa(std::vector<GPA>& gpas);
void showTotalCreditHours(GPA& gpa);
void showTotalPointsAchieved(GPA& gpa);
void showResultGpa(GPA& gpa);

int main(int argc, char const *argv[])
{
    const int OFFSET = -1;
    const int semesterCounts = 1;
    const int semesterSelected = 1 + OFFSET;
    float resultCgpa, totalCredits, totalPoints;
    std::vector<GPA> gpas;

    int courseTaken;
    std::cout << "Course Taken: ";
    std::cin >> courseTaken;

    // each semester
    for (int i = 0; i < semesterCounts; i++)
    {
        GPA gpa;
        getGpa(courseTaken, gpa);

        gpas.push_back(gpa);
    }
    
    showOverallCourseGrade(gpas[semesterSelected]);
    showResultCgpa(gpas);
    showTotalCreditHours(gpas[semesterSelected]);
    showTotalPointsAchieved(gpas[semesterSelected]);
    showResultGpa(gpas[semesterSelected]);

    return 0;
}


void getGpa(const int& courseTaken, GPA& gpa) {    
    for (int i = 0; i < courseTaken; i++)
    {
        std::cout << "Course " << i + 1 << std::endl;

        int creditHours = Input::getInputCredit();
        int gradePoints = Input::getInputGradePoint();

        std::cout << std::endl;

        gpa.inputCreditPoint(gradePoints, creditHours);
    }
}
void showMessage(const char* message, auto value) {
    std::cout << message << value;
    std::cout << std::endl;

}

void showOverallCourseGrade(GPA& gpa) {
    showMessage("Overall course grade: ", gpa.getTotalPoints());
}
void showResultCgpa(std::vector<GPA>& gpas) {
    showMessage("CGPA: ", CGPA::getCgpaFromGpas(gpas));
}
void showTotalCreditHours(GPA& gpa) {
    showMessage("Total credit hours: ", gpa.getTotalCreditHours());
}
void showTotalPointsAchieved(GPA& gpa) {
    showMessage("Total points achieved: ", gpa.getTotalPoints());
}
void showResultGpa(GPA& gpa) {
    showMessage("GPA: ", gpa.calculateGPA());
}
