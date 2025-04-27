#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    // ������������� ������ �������
    const int rows = 5;
    const int cols = 6;
    int arr[rows][cols];
    // ���������� ������� ���������� ������� �� 0 �� 100
    cout << "��������������� ������:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            arr[i][j] = rand() % 101; // ��������� ����� �� 0 �� 100
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    // ������ ��� �������� ����������
    // ��� ��� ����� �� 0 �� 100, ����� ������������ ������ ������� ��� �������� ��������
    const int MAX_ELEMENTS = 101; // �� 0 �� 100 - ����� 101 ��������� ��������
    int counts[MAX_ELEMENTS] = { 0 }; // ������������� ���� ��������� ������
    // ������� ����������
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) counts[arr[i][j]]++; // ����������� ������� ��� �������� ��������   
    }
    // ����� ������������� ���������
    cout << "\n������������� ��������:" << endl;
    bool hasRepeated = false;
    for (int i = 0; i < MAX_ELEMENTS; i++) 
    {
        if (counts[i] > 1) 
        {
            cout << "������� " << i << " ����������� " << counts[i] << " ���(�)" << endl;
            hasRepeated = true;
        }
    }
    if (!hasRepeated) cout << "������������� ��������� �� �������." << endl;
}