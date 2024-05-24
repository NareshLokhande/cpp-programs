#include <cstdio>

int main(){
    //Local structure
    struct Employee
    {
        char Name[60];
        int EmpId;
        float Salary;
    };

    struct Employee emp1; // Here EMp1 is a variable of struct employee

    // typedef struct Employee EmpObj; // EmpObj Is an alias
    
    // emp1.Name = ['N','A','R','E','S','H'];
    emp1.Name[0] = 'A';
    emp1.EmpId = 101;
    emp1.Salary = 5000;

    printf("%-5s%-5d%-5f", emp1.Name, emp1.EmpId, emp1.Salary);
    return 0;
    
}