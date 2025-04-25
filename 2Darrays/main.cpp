#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	cout << "2Darrays" << endl;
	const int ROWS = 5;
	const int COLS = 4;
	int arr[ROWS][COLS] = 
	{ 
		{ 1, 2, 3 }, 
		{ 5, 6, 7 }, 
		{ 9, 10, 11 }, 
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}