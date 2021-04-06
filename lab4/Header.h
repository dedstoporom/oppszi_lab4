#include<iostream>
#include<math.h>
using namespace std;
class Complex 
{
public:
	Complex();
	Complex(double, double);
	Complex(double);
	double Phi() const;
	double R() const;
	double Re() const;
	double Im() const;
	Complex operator-(const Complex& expr);
	Complex operator+(const Complex& expr);

private:
	double re;
	double im;
	friend ostream& operator<<(std::ostream& out, const Complex& ex);
	friend istream& operator>>(std::istream& in, Complex& ex);
};

Complex operator*(double n, const Complex& z);
Complex operator^(const Complex& lhs, double rhs);
Complex cos1(const Complex& z);
Complex sh(const Complex& z);
Complex ch(const Complex& z);