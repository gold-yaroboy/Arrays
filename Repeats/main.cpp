#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n;i++)arr[i] = rand() % 10;
	for (int i = 0;i < n; i++)cout << arr[i] << "\t";
	cout << endl;
	for (int i = 0;i < n;i++)//поиск повторений
	{
		bool met_before = false;
		for (int j = 0;j < i;j++)//проверяем слева
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 0)cout << "Значение " << arr[i] << " повторяется " << count << " раз\n";
	}
}