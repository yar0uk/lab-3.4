// Lab_03_4.cpp
// �������� �������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 18
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double R; // ������� ��������
	double y; // ������� ��������
	cout << "b = "; cin >> b;
	cout << "a = "; cin >> a;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((y >=sqrt(pow(R,2)-((x-a)*(x-a)))+b && y <= x) ||
		(y <= sqrt(pow(R,2)-((x-a)*(x-a)))+b && y >= x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}