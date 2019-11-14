#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, d, n, i;

	cout << "Введите первый член геометрической прогрессии" << endl;
	cin >> a;
	cout << "Введите размерность массива" << endl;
	cin >> n;
	cout << "Введите знаменателей геометрической прогрессии" << endl;
	cin >> d;

	if (n > 1)
	{ 
		int *arr = new int[n];
		for (i = 0; i < n; i++)
		{
			arr[i] = a * pow(d, i);
		}

		for (i = 0; i < n; i++)
		{
			cout << "Элемент " << i << ":" << arr[i] << endl;
		}
	}
	else
	{
		cout << "N по условию больше единицы. Попробуйте еще раз ввести N, следуя условию." << endl;
	}

	system("pause");
	return 0;
}
