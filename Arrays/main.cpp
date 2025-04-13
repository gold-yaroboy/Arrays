#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	
	const int SIZE = 5;
	cout << "Добрый вечер, для работы необходимо ввести исходные данные" << endl;
	cout << "1.1)" << endl;
	cout << "Перечислите 5 элементов массива на отдельных строках: " << endl;
	int Array[SIZE] = {};
	for (int i = 0;i < SIZE; i++)cin >> Array[i];
	cout << endl;
	cout << "1.2)" << endl;
	for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
	cout << endl;
	cout << endl;
	cout << "1.3)" << endl;
	for (int i = SIZE; i >= 1; i--) cout << Array[i] << "\t";
}