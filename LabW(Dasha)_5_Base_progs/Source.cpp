#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
using namespace std;
int main1() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*	�������� ���������, �������� ������, ��������������� 
		������ ��������������� �������. ������� �������� ������������� 
		��� ������. ��� ������� ����� ���������� ������������ 
		������� ��� ������ �� ��������.
		��� ���������� ������ �������� ���������� �������� �� �����.
	*/


	/*	1)������ ������ � ����������.
		������������� ����� � ������ �� �������� ��� ����� ��������.
	*/

	const int M = 200;		//������������ ���������� �������� � str
	char str[M], c;			//������������� str
	gets_s(str);			//���� str
	int len = strlen(str);  //������������� len � � len ������������ ����� str


	for (int i=0; i < len; i++)			//���� �� ����� ����� str
	{				
		for (int j = 0; j < len-1; j++)	//��� ���� ���� �� ����� ����� str, ��� ��� ������ �� ������
		{
			if (((int)(str[j])) > ((int)(str[j+1]))) {	//������� �� ������� ASCII, ��� ������� � ������ �� ���� ����
				c = str[j];								
				str[j] = str[j+1];		//������ c ������� ��� ���������� c
				str[j+1] = c;
			}
		}
	}									//�� ������� ������������� � ���������� ������
		
	for (int i = 0; i < len; i++)		//��� ���� ��� ������� ���� ������� �� ������� ASCII 
	{
		cout << abs((int)(str[i])) << "\t";		 //������� abs ������ ������� ����� ��� ����� ��� ������� ����, ������ ��� � ������� ASCII ���� � ��������
	}

	cout << endl;

	for (int i = 0; i < len; i++)		//��� ���� ��� ������� ����� �������� 
	{
		cout << str[i] << "\t";
	}

	cout << endl;
	system("pause");
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*	
		�������� ���������, �������� ������, ���������������
		������ ��������������� �������. ������� �������� �������������
		��� ������. ��� ������� ����� ���������� ������������
		������� ��� ������ �� ��������.
		��� ���������� ������ �������� ���������� �������� �� �����.
	*/

	/*
		2) ������ ������ � ����������.������� ��� �������� ������,
		������ ��� ������� ������ �� 1 ������.
		� �������, ������ ������, ������ ����� � �����ѻ, ������ � ������ � �.�
	*/

	const int M = 200;
	char str[M], c;
	gets_s(str);
	int len = strlen(str);
	str[len] += '\0';
	len = strlen(str);
	for (int i = 0; i < len+1; i++) 
	{
		cout << "����� �� " << i << " ���������: ";

		for (int j = 0; j < len - i; j++)
		{
			cout << str[j + i];
		}

		for (int j = 0; j < i; j++) 
		{
			cout << str[j];
		}
		
		cout << endl;
	}
	cout << endl;

}