#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, j;

	cout << "Введите число N" << endl;
	cin >> n;

	if (n > 0)
	{ 
		int *arr = new int[n];
		for (i = 0, j = 1; i < n; i++, j += 2)
		{
			arr[i] = j;
		}

		for (i = 0; i < n; i++)
		{
			cout << "Элемент " << i << ":" << arr[i] << endl;
		}
	}
	else
	{
		cout << "N по условию больше нуля. Попробуйте еще раз ввести N, следуя условию." << endl;
	}

	system("pause");
	return 0;
}
