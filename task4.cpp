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

	for (i = 0, j = n - 1; i < n - 1 && j > 0; i++, j--)
	{ 
	cout << a[i] << ", " << a[j] << ", ";
	}
	cout << a[n - 1] << ", " << a[0] << endl;

	system("pause");
	return 0;
}
