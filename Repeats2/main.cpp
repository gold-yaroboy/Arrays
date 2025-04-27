#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    // Фиксированный размер массива
    const int rows = 5;
    const int cols = 6;
    int arr[rows][cols];
    // Заполнение массива случайными числами от 0 до 100
    cout << "Сгенерированный массив:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            arr[i][j] = rand() % 101; // Генерация числа от 0 до 100
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    // Массив для подсчета повторений
    // Так как числа от 0 до 100, можем использовать индекс массива как значение элемента
    const int MAX_ELEMENTS = 101; // От 0 до 100 - всего 101 возможное значение
    int counts[MAX_ELEMENTS] = { 0 }; // Инициализация всех счетчиков нулями
    // Подсчет повторений
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) counts[arr[i][j]]++; // Увеличиваем счетчик для текущего элемента   
    }
    // Вывод повторяющихся элементов
    cout << "\nПовторяющиеся элементы:" << endl;
    bool hasRepeated = false;
    for (int i = 0; i < MAX_ELEMENTS; i++) 
    {
        if (counts[i] > 1) 
        {
            cout << "Элемент " << i << " повторяется " << counts[i] << " раз(а)" << endl;
            hasRepeated = true;
        }
    }
    if (!hasRepeated) cout << "Повторяющихся элементов не найдено." << endl;
}