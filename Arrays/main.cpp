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
	
	cout << "1.1) Перечислите 5 элементов массива на отдельных строках: " << endl;
	int Array[SIZE];
	for (int i = 0; i < SIZE; i++)cin >> Array[i]; //Можно вводить через пробел - он читает как отдельные элементы.
	
	cout << "1.2) Вывод в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
	cout << endl;
	cout << endl;
	
	cout << "1.3) Вывод в обратном порядке" << endl;
	for (int j = SIZE-1; (j+SIZE) >= SIZE; j--)cout << Array[j] << "\t";
	cout << endl;
	cout << endl;
	
	cout << "1.4) Вычисления: " << endl;
	int s = 0;
	for (int l = 0; l < SIZE; l++)s += Array[l];
	cout << "Сумма: " << s << "\t" << "Среднее-арифметическое: " << (double)s / SIZE;
	cout << endl;
	cout << endl;
	
	cout << "1.5) Поиск: " << endl;
	int min = Array[0];
	int max = Array[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (Array[i] < min)min = Array[i];
		if (Array[i] > max)max = Array[i];
	}
	cout << "Мин значение: " << min << "\t\t" << "Макс значение: " << max << endl;
}