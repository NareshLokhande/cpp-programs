#include <iostream>
#include "MathOp.h"
using namespace std;

enum
{
    EXIT,
    ADD,
    SUB,
    MUL,
    DIV
}

int main()
{
    int choice = 0;
    do
    {
        cout << "         Welcome         " << endl;
        cout << "Press 1 to Add" << endl;
        cout << "Press 2 to Sub" << endl;
        cout << "Press 3 to Mul" << endl;
        cout << "Press 4 to Div" << endl;
        cout << "Press 0 to Exit" << endl;
        cout << "----------------------------" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

    } while (choice != 0);
    return 0;
}
    switch (choice)
    {
    case ADD:
        cout << "Sum :   "<< Add(10, 20) << endl;
        break;
    case SUB:
        cout << "sub :   "<< sub(10, 20) << endl;
        break;
    case MUL:
        cout << "Mul :   "<< mul(10, 20) << endl;
        break;
    case DIV:
        cout << "Div :   "<< div(10, 20) << endl;
        break;
    case EXIT:
        cout << "Exiting the program"<< endl;
        break;

    default:
    cout<<"Invalid input"<<endl;
        break;
    }

