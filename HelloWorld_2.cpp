#include <iostream>

// �������� ������� std::cout
void print()
{
// ������ ��� ����� ������������ ����������� ����������
// ��� ������ � ������� � �� ������������ ����� ���� ������ ����������.
	std::cout << "Hello Skillbox!\n";
	}

long long sum(long long a, long long b)
{
	return (a + b);

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
	std::cout << sum(1,3) << "\n";
	
	return 0;
}

