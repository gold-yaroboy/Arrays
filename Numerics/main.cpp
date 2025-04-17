#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");

	// Десятичное число, введённое Юзером в консоли 
	// перевести в двоичную и шестнадцатиричную системы исчесленияя
	int n;
	cout << "Введите число, а я сним что нибудь придумаю: "; 
	cin >> n; cout << endl;
	
	cout << "В двоичной СС:" << "\t";
	const int size = 64;
	int arr[size] = {};
	int temp;
	for (int i = 0; i < n; i++)
	{
		temp = arr[n % 2];
		arr[i - 1] = arr[i];
		arr[size - 1] = temp;
		cout << temp << "\t";
	}
}