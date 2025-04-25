#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
    const int n = 5;
    int arr[n] = {};
    int minRand, maxRand;
    //range
    do
    {
        cout << "Введите минимальное случайное число: "; cin >> minRand;
        cout << "Введите максимальное случайное число: "; cin >> maxRand;
        if (minRand == maxRand)cout << "Числа должны быть разные" << endl;
        if (minRand > maxRand)cout << "Минимальное должно быть больше" << endl;
    } while (minRand >= maxRand);
    /*if (maxRand < minRand)
    {
        int buffer = minRand;
        minRand = maxRand;
        maxRand = buffer;
    }*/
    //random_inicializing
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (maxRand - minRand) + minRand; //ограничили снизу 50 сверху 100
    }
    //cout_array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;
    //sort_SELECTED
    for (int i = 0; i < n; i++)//счётчик i выбирает элемент 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])//счётчик j перебирает элементы
            {
                int buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
            }
        }
    }
    //cout_array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}