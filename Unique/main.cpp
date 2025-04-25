#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    for (int i = 0; i < n;i++) //инициализация массива
    {
        bool unique;
        do
        {
            arr[i] = rand() % 10;
            unique = true;
            for (int j = 0; j < i;j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }            
        } while (!unique);
    }
    for (int i = 0; i < n; i++) //вывод массива
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

}