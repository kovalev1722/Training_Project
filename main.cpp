#include <iostream>
#include <string>
#include "Calculate.h"
#include "Matrix.h"
#include "List.h"
#include "ioConsole.h"

using namespace std;

int main()
{
	//startProgram();

	List list;
	List filtList;
	//while (1)
	//{
	//	readCommand(list, filtList);
	//}

	//1. ������������ ����������� � ��������� ������������
	{
		//List L;
		//Matrix a;
		//cin >> L >> L >> L;
		//List B(L);
		//cout << B;
		//-B;
		//cin >> B >> B;
		//B = L;
		//cout << B;

		//Matrix a;
		//cin >> a;
		//Matrix b(a);
		//cout << b;

		//Matrix a, b;
		//cin >> a >> b;
		//b = a;
		//cout << b;
	}

	//2. ����������, �������� ��-��
	{
		//List L;
		//Matrix a, b;
		//cin >> a >> b;
		//L + a + a;  // +2 � �����.
		//cout << L;
		//b + L;		//+1 � ������.
		//cout << L;
		//L + b + b;	//+2 � ����� (����� 5).
		//L - 3;		//������ 3-�� ������� � ������ (a), �������� 4.
		//cout << L;
		//4 - L;		//������ 4-�� ������� � ������ (b), �������� 3.
		//cout << L;	// b, a, b.
	}

	//3. ��������� �������� �� �������
	{
		//List L;
		//cin >> L >> L >> L >> L;
		//cout << L;
		//Matrix a = L[3];
		//cout << a;
	}

	//4. ������ �� ����� ������� � ����� �� �������.
	{
		//List L, B;
		//cin >> L >> L >> L;
		//B = L < 3.23;
		//cout << B;
		//B = L > -3.12;
		//cout << B;
		//Matrix a = L == 2;
		//cout << a;
	}

	//5. ���� ����� ��� �����.
	{
		//ofstream fout;
		//	fout.open("fileSave.txt");
		//ifstream fin;
		//	fin.open("fileRead.txt");
		//
		//List L;
		//fin >> L;
		//cout << L;
		//fout << L;
		//Matrix a;
		//fin >> a;
		//cout << a;
		//fout << a;
	}

	//7. ��������� � ������� ������ � �������� ������
	{
		//List L;
		//cin >> L >> L >> L;
		//cout << L;
		//L.saveBinary();
		//-L;
		//cout << L;
		//L.loadBinary();	
		//cout << L;
	}

	system("pause");
	return 0;
}