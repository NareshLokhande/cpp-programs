#include <cstdio>
#include <string>
class Employee{
    public:
    int EmpId,
    float salary;

    void ShowData(){
        printf("%-5d%-5f", EmpId, salary);
    }

    private:
        int fees;
};

int main(){
    Employee e1;
    e1.EmpId=100;
    e1.salary = 799.9
}