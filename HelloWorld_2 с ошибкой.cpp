#include <iostream>

// Вызывает функцию std::cout
void print()
{
// Потому что хотим использовать стандартную библиотеку
// для печати в консоль и не использовать какие либо другие библиотеки.
	std::cout << "Hello Skillbox!\n";
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
	print();
	print();
	print();

	std::cout << printint(toprint:100500);

	return 0;
}

