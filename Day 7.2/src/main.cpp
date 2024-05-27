#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void Show(int n)	//n will get a memory
{
	cout<<"Num1 in show :	"<<n<<endl;
	n=200;
}

void Show1(int *ptr)	//ptr will get a memory
{
	cout<<"Num1 in show :	"<<*ptr<<endl;
	*ptr=200;
}

void Show2(int &ref)	//ref is a reference variable
{
	cout<<"Num1 in show :	"<<ref<<endl;
	ref=200;
}

int main(){
	int Num1=100;
	cout<<"Initial Value of Num1:	"<<Num1<<endl;
	//Show(Num1);		//Call by value
	//Show1(&Num1);	//call by address
	Show2(Num1);	//call by reference
	cout<<"Value of Num1 after show:	"<<Num1<<endl;

}
