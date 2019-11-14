#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i;

	cout << "Введите размерность массива: ";
	cin >> n;
	
	int *a = new int[n];
	
	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}
	for (i = 0; i < n; i += 2) 
	{
		cout << a[i] << ", ";
	}

	for (i = n - 1; i > 0; i -= 2)
	{
		cout << a[i] << ", ";
	}

	system("pause");
	return 0;
}
