#include <iostream>
#include <string>
int main()
{
	setlocale(LC_ALL, "RUS");
	std::string name;
	std::cout << "Введите имя " << std::endl;
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;



	return 0;
}