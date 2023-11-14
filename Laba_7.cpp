#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sum = 0;

	for (int i = 1; i <= 150; ++i) 
	{
		if (i % 5 == 0 || i % 7 == 0) 
		{
			sum += i;

		}
	}
	cout << "Сумма всех чисел, кратных 5 или 7 в диапозоне от 1 до 150: " << sum << endl;

	return 0;
}