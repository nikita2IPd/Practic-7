#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите число: ";
	cin >> number;

	int sum = 0;
	int product = 1;
	int digit;

	for (; number > 0; number /= 10)
	{
		digit = number % 10;
		sum += digit;
		product *= digit;
	}
	cout << "Сумма цифр числа:" << sum << endl;
	cout << "Произведение цифр числа: " << product << endl;
	return 0;
}