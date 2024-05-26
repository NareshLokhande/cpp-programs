#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2;
    cout << "Enter Numbers: " << endl;
    cin >> Num1;

    if (Num1 > 0)
    {
        clog << "Valid" << endl;
    }

    cin >> Num2;
    if (Num2 == 0)
    {
        cerr << "Invalid Value in Num2 for division" << endl;
        clog << "Operation Terminated, Due to 0 value in Num2" << endl;
    }
    else
    {
        int res = Num1 / Num2;
        cout << "Division Result: " << res << endl;
    }

    return 0;
}
