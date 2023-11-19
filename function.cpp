#include"function.h"

//the values are taken within their ranges (assumed)
int matrix[3][3] = { {55,75,95},{105, 155, 185},{205, 260, 295} };
void costSlab1()
{
	int bill;
	cout << "Bill for Slab 1 is" << endl;
	for (int i = 0; i < 3; i++)
	{
		//multiplying with unit cost
		bill = 10 * matrix[0][i];
		cout << bill << "  ";
	}
	cout << endl;
}

void costSlab2()
{
	int bill;
	cout << "Bill for Slab 2 is" << endl;
	for (int i = 0; i < 3; i++)
	{
		bill = 15 * matrix[0][i];
		cout << bill << "  ";
	}
	cout << endl;
}

void costSlab3()
{
	int bill;
	cout << "Bill for Slab 3 is" << endl;
	for (int i = 0; i < 3; i++)
	{
		bill = 20 * matrix[0][i];
		cout << bill << "  ";
	}
	cout << endl;
}

