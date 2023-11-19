#include"function.h"

int main()
{
	int choice;
	string id;
	cout << "Please enter your ID: ";
	cin >> id;
	while (true)
	{
		//menu driven
		cout << endl;
		cout << "\t" << "*** " << "Student ID : " << id << " ***" << endl;
		cout << "Press 1 to display the bill of slab 1 and slab 2." << endl;
		cout << "Press 2 to display the bill of slab 3." << endl;
		cout << "Press any other key to exit." << endl;
		cout << "Enter: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
			costSlab1();
			//cout << endl;
			costSlab2();
			//cout << "slab 1 and 2" << endl;
			break;
		}
		case 2:
		{
			costSlab3();
			//cout << "slab 3" << endl;
			break;
		}
		default:
		{
			exit(0);
		}
		}
	}
	return 0;
}