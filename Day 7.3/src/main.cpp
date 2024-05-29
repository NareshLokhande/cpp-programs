#include <iostream>
using namespace std;

int main(){
	int Num1=100;

	const int &Ref = Num1;
//	int &Ref1 = Num1;

	cout<<Num1<<endl;
	cout<<Ref<<endl;

	//Ref = 200; Not Ok

	Num1 = 30;
	cout<<Num1<<endl;
	cout<<Ref<<endl;
	return 0;
}
