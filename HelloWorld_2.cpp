#include <iostream>

// Вызывает функцию std::cout
void print()
{
// Потому что хотим использовать стандартную библиотеку
// для печати в консоль и не использовать какие либо другие библиотеки.
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
* Присваиваем значения переменным и печатаем "Hello World"
*/
int main()
{
	std::cout << sum(1,3) << "\n";
	
	return 0;
}

