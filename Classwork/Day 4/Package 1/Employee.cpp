#include "Employee.h"

void Employee::GetData(){
    cout << "\nEnter Name : ";
    cin >> Name;
    cout << "Enter ID : ";
    cin >> EmpId;
    cout << "Enter Salary : ";
    cin >> Salary;
}

void Employee::ShowData(){
    cout << "\nName       : " <<Name<<endl;
    cout << "ID         : " <<EmpId<<endl;
    cout << "Salary     : " <<Salary<<endl;
}