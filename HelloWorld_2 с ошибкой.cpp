#include <iostream>

// �������� ������� std::cout
void print()
{
// ������ ��� ����� ������������ ����������� ����������
// ��� ������ � ������� � �� ������������ ����� ���� ������ ����������.
	std::cout << "Hello Skillbox!\n";
	}

int printint(int toprint)
{
	std::cout << toprint;
	return toprint;
}

/*
* ����������� �������� ���������� � �������� "Hello World"
*/
int main()
{
	print();
	print();
	print();

	std::cout << printint(toprint:100500);

	return 0;
}

