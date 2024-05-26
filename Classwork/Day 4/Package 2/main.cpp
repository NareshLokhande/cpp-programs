#include <iostream>
#include "Demo.cpp"
using namespace std;

static int Num2 = 100;
int main()
{
    extern int Num1;

    cout << "The value of Num1: " << Num1 << endl;
    cout << "The value of Num2: " << Num2 << endl;

    return 0;
}
