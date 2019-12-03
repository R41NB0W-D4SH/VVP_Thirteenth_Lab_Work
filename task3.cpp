#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, n, i, dp;

	cout << "Введите первый элемент массива: ";
	cin >> a;
	cout << "Введите второй элемент массива: ";
	cin >> b;
	cout << "Введите размерность массива: ";
	cin >> n;


	if (n > 2)
	{
		int *arr = new int[n];
		arr[0] = a;
		arr[1] = b;

		dp = arr[0] + arr[1];

		for (i = 2; i < n; i++)
		{
			arr[i] = dp;
			dp = dp + arr[i];
		}

		for (i = 0; i < n; i++)
		{
			cout << "a[" << i << "] : " << arr[i] << endl;
		}
	}
	else
	{
		cout << "N по условию больше двух. Попробуйте еще раз ввести N, следуя условию." << endl;
	}

	system("pause");
	return 0;
}
