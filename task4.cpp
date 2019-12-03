#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, j;

	cout << "Введите размерность массива: ";
	cin >> n;

	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		cout << a[i] << ", " << a[j] << ", ";
	}

	if (i == j)
	{
		cout << a[j];
	}

	cout << "." << endl;

	system("pause");
	return 0;
}
