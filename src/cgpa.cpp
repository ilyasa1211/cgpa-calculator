// #include "./gpa.cpp"

class CGPA
{
public:
    static float getCgpaFromGpas(std::vector<GPA>& gpas)
    {
        float totalGpa = 0;

        for (int i = 0; i < gpas.size(); i++)
        {
            totalGpa += gpas[i].calculateGPA();
        }
        
        return totalGpa / gpas.size();
    }
};
