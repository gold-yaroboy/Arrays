#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");

	int num;
	cout << "Введите число, а я сним что нибудь придумаю: "; 
	cin >> num; cout << endl;
	
    int binary[32] = { 0 };
    int i = 0;
    for (i = 0; num > 0; i++) 
    {
        binary[i] = num % 2;
        num /= 2;
    }
    cout << "Двоичное: ";
    if (i == 0) cout << "0";
    else for (int j = i - 1; j >= 0; j--)cout << binary[j];
    cout << endl;

    //Шестнадцатиричное не выкупаю...

}