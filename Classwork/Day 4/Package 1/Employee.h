#include <iostream>
#include <iostream>
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using namespace std;

class Employee {
    public:
    string Name;
    int EmpId;
    float Salary;
    void GetData();
    void ShowData();
};

#endif