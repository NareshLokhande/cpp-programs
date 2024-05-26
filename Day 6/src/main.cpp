#include <iostream>
using namespace std;

class Number {
public:
	int Num1;
	int Num2;

	Number() {		//default / Parameterless constructor
		this->Num1 = 10;
		this->Num2 = 20;
	}

	Number(int N1) {		//Parameterized constructor with one paramter
		this->Num1 = N1;
	}

	Number(int N1, int N2) {	//Parameterized constructor with two paramter
		this->Num1 = N1;
		this->Num2 = N2;
	}
	void ShowData() {
		cout << "Num1	:	" << this->Num1 << endl;
		cout << "Num2	:	" << this->Num2 << endl;
	}
};

int main() {
	Number ob1;	// parameterless constructor
	ob1.ShowData();

	Number ob2(10);	// parameterized constructor with one paramter will be called
	ob2.ShowData();

	Number ob3(10,20);	// parameterized constructor with two parameter will be called
	ob3.ShowData();

	return 0;
}
