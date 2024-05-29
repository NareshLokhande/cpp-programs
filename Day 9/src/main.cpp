#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
	int Sid;
	string Name;

	Student() {}

	Student(int Sid, string Name)
	{
		this->Sid = Sid;
		this->Name = Name;
	}

	void ShowData()
	{
		cout << "ID : " << this->Sid << "	Name : " << this->Name << endl;
	}
};

class Admin
{
public:
	vector<Student> slist; // Association

	Admin()
	{
		slist.push_back(Student(101, "Naresh"));
		slist.push_back(Student(102, "Mahesh"));
		slist.push_back(Student(103, "Ganesh"));
	}

	void ViewStudent()
	{
		for (Student s : slist)
		{
			s.ShowData();
		}
	}

	void AddStudent()
	{
		Student s;
		cout << "Enter Id : ";
		cin >> s.Sid;
		cout << "Enter Name : ";
		cin >> s.Name;

		slist.push_back(s);
	}

	void DeleteStudent()
	{
		int id;
		cout << "Enter the Id you Want to delete: ";
		cin >> id;

		for (int i = 0; i < slist.size(); i++)
		{
			if (slist[i].Sid == id)
			{
				slist.erase(slist.begin() + i);
				break;
			}
		}
	}

	void UpdateStudent()
	{
		int id;
		cout << "Enter the Id you Want to Update: ";
		cin >> id;

		for (int i = 0; i < slist.size(); i++)
		{
			if (slist[i].Sid == id)
			{
				cout << "Enter Updated Name :	";
				cin >> slist[i].Name;
				cout << "Student info updated\n";
				break;
			}
		}
	}

	void DisplayMenu()
	{
		cout << "\n1. View Students\n";
		cout << "2. Add Students\n";
		cout << "3. Delete Students\n";
		cout << "4. Update Students\n";
		cout << "5. Exit\n\n";
	}

		int GetChoice()
	{
		int choice;
		cout << "Enter your choice: ";
		cin >> choice;
		return choice;
	}

	void HandleChoice(int choice)
	{
		switch (choice)
		{
		case 1:
			ViewStudent();
			break;
		case 2:
			AddStudent();
			break;
		case 3:
			DeleteStudent();
			break;
		case 4:
			UpdateStudent();
			break;
		case 5:
			cout << "Exiting...\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
			break;
		}
	}
};

int main()
{
	Admin adm;
	int choice;

	while (true)
	{
		adm.DisplayMenu();
		choice = adm.GetChoice();
		adm.HandleChoice(choice);

		if (choice == 5)
		{
			break;
		}
	}

	return 0;
}
