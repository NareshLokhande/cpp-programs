// Write a program in C++ to print the sum of two numbers and swap them as well.

#include <iostream>

using namespace std;
int main(){
    int Num1;
    int Num2;
    int sum;
    int temp;

    cout << "Enter Num1 : ";
    cin >> Num1;
    cout << "Enter Num2 : ";
    cin >> Num2;

    sum = Num1+Num2;

    cout << " The sum of " << Num1 << " and " << Num2 << " is " << sum << endl;

    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

    cout << "After Swapping: " << endl;
    cout << "First Number : " << Num1 << endl;
    cout << "Second Number : " << Num2 << endl;
}