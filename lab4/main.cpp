#include<iostream>
#include<math.h>
#include "Header.h"
using namespace std;
Complex y(const Complex& z);
int main() 
{
	setlocale(LC_ALL, "RUS");
	Complex ex1(10, -5);
	Complex ex2 = 3;
	Complex ex3;
	Complex ex4 (3, 40);
	cout << "¬ведите дейтсвительную и мнимую части комплексного числа:" << endl;
	cin >> ex3;
	cout << "ex3 = " << ex3 << endl;
	cout << y(ex3) << endl;

}
Complex y(const Complex& z)
{
	return ((z ^ 2) - cos1(z));
}