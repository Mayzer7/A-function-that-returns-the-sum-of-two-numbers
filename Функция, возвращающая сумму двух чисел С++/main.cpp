/* Функция, возвращающая сумму двух чисел */
#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}


int main()
{
	int a = 5, b = 3, c;
	c = sum(a, b);
	cout << "sum = " << c << endl;
	cout << "sum = " << sum(a,b) << endl;
	return 0;
}