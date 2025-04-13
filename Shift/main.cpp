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
	
}