// Lab_03_4.cpp
// Ференчук Ярослав
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний аргумент
	double b; // вхідний аргумент
	double R; // вхідний аргумент
	double y; // вхідний параметр
	cout << "b = "; cin >> b;
	cout << "a = "; cin >> a;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y >=sqrt(pow(R,2)-((x-a)*(x-a)))+b && y <= x) ||
		(y <= sqrt(pow(R,2)-((x-a)*(x-a)))+b && y >= x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}