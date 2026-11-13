#include <iostream>
#include <string>
int main()
{
	int number1,number2,number3,number4;
    std::cout << "Введите минуты, цена, билеты, внесено:" << std::endl;
	std::cin >> number1 >> number2 >> number3 >> number4;
	int session = number1 / 60;
	int minutes = number1 % 60;
	std::cout << "Сеанс: " << session << "Часы и " <<  60 << " минуты" << std::endl;
	int total = number2 * number3;
	std::cout << "Сумма к оплате: " << total << std::endl;
	int change = number4 - total;
	std::cout << "Сдача: " << change << std::endl;
	std::cout << change <<"Спасибо!" << std::endl;
	return 0;

}