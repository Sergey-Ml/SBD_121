#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "12345\tHello \"World\"!\n";
	cout << "������\n";
	cout << "++\n";
	cout << "\n";
	cout << "\\";
}

//Ctrl + F7 - ����������
//Ctrl + F5 - ������

/*
------------------------------------------------------------
#include<iostream> ������ �����/������ - cin/cout
# - ����������, ��� include - ��� ���������.
��������� - ��� �������� ����������� �� ���������� ��������� ��������.
��������� #include �������� ����������� �� ��, ��� � ������ ��������� ����� 
����� ���������� ������ ����, � ������ ������ iostream.

using namespace std; - ������� ����������� ������������ ������������ ���� std.
� ���� ������� ������������ ��������� ������ cin/cout.


void main()
main() - ��� ������� �������, ������� �������� ������ �����,
��������� � ��� ���������� ���������� ����� ���������.

void (�������) ����������, ��� ������� main() ������ �� ���������� �� ����������.

cout (Console Out) - ��� ����� ������ �� �����. ������� �������� � ���� �������.

<< - �������� ��������������� � �����, �������������� �������� � ����� cout.
------------------------------------------------------------
*/

/*
	Escape-������������������ (Esc)
	
	\ - Backslash (�������� ����� �����)
	/ - Slash (����� �����)

	\ - ��� ������ ������ ������������ �������� ������� �������
	\n - newline, ��������� ������ � ������ ����� ������.
	\t - Tab. ���� ��������� �������� � ���� �� ������ ��������
*/