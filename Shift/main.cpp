#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	
	const int SIZE = 10;
	int Array[SIZE] = {0,1,2,3,4,5,6,7,8,9};
	cout << "Исходный цикл" << endl;
	for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
	cout << endl;
	cout << endl;
	
	cout << "Сдвиг влево" << endl;
	int temp;
	for (int j = 0; j < SIZE; j++)
	{
		temp = Array[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)Array[i] = Array[i - 1];
		Array[0] = temp;
		for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	cout << "Сдвиг вправо" << endl;
	for (int j = 0; j < SIZE; j++)
	{
		int buf;
		buf = Array[0];
		for (int i = 0; i < SIZE; i++)Array[i-1] = Array[i];
		Array[SIZE-1] = buf;
		for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
		cout << endl; //ye b
	}
}