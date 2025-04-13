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
	int Array[SIZE];
	for (int i = 0; i < SIZE; i++)cin >> Array[i];
	cout << endl;
	cout << "1.2)" << endl;
	for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
	cout << endl;
	cout << endl;
	cout << "1.3)" << endl;
	for (int j = SIZE-1; (j+SIZE) >= SIZE; j--)cout << Array[j] << "\t";
	cout << endl;
	cout << endl;
	cout << "1.4)" << endl;
	int s = 0;
	for (int l = 0; l < SIZE; l++)s += Array[l];
	int m = s / SIZE;
	cout << "Сумма: " << s << "\t" << "Среднее-арифметическое: " << m;
	cout << endl;
	cout << endl;
	cout << "1.5)" << endl;
	int min = Array[0];
	int max = Array[0];
	for (int i = 1; i < SIZE; i++) { if (Array[i] < min)min = Array[i]; }
	for (int i = 1; i < SIZE; i++) { if (Array[i] > max)max = Array[i]; }
	cout << "Минимальное значение: " << min << "\t" << "Максимальное значение: " << max << endl;
}