#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class student() {

	int SId;
	int Age;
	char Name[30];
public:

	student(){

	}

	student():SId(101), Age(24), Name("Naresh") {

	}

	student(int Sid, int Age, const char "Name"):SId(SId), Age(Age){

	}

	void ShowData() {
		cout<< "ID:	" <<SId<<"Age:	"<<Age<<"Name:	"<<Name<<endl;
	}
};

int main(){

}
