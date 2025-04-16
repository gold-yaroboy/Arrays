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
	for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
	cout << endl;
	cout << endl;
	int temp;
	for (int j = 0; j < SIZE; j++)
	{
		temp = Array[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)Array[i] = Array[i - 1];
		Array[0] = temp;
		for (int i = 0; i < SIZE; i++)cout << Array[i] << "\t";
		cout << endl;
	}
	//cдвиг влево, надо сдвинуть вправо
}