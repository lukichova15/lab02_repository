/*Lab_02.cpp
������� ��������
����������� ������ 2
˳��� ��������
������� 12*/

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	const double pi = 3.141592653589793238; 
	double a; // ������� �������� 
	double z1, z2; // ���������� ���������� 1-�� �� 2-��  ������ ��������
	cout << "a = "; cin >> a;

	z1 = (sin(4 * a) / (1 + (cos(4 * a)))) * (cos(2 * a) / (1 + (cos(2 * a))));
	z2 = 1 / tan(3 / 2 * pi - a);

	cout << endl;
	cout << "z1 =" << z1 << endl;
	cout << "z2 =" << z2 << endl;
	cin.get();
	return 0;
}
