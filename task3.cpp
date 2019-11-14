#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, n, i;

	cout << "Введите первый элемент массива" << endl;
	cin >> a;
	cout << "Введите второй элемент массива" << endl;
	cin >> b;
	cout << "Введите размерность массива" << endl;
	cin >> n;
	

	if (n > 2)
	{ 
		int *arr = new int[n];
		arr[0] = a;
		arr[1] = b;

		for (i = 2; i < n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}

		for (i = 0; i < n; i++)
		{
			cout << "Элемент " << i << ":" << arr[i] << endl;
		}
	}
	else
	{
		cout << "N по условию больше двух. Попробуйте еще раз ввести N, следуя условию." << endl;
	}

	system("pause");
	return 0;
}
