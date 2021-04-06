#include<iostream>
#include<math.h>
#include "Header.h"
Complex::Complex(double r, double i)
{
	re = r;
	im = i;
}
Complex::Complex(double r)
{
	re = r;
	im = 0;
}
Complex::Complex()
{
	re = 0;
	im = 0;
}
/*////////////////////////////////////////////////////////*/
Complex sh(const Complex& z)
{
	return (exp(2 * z.Im()) - exp(-2 * z.Im())) / 2;
}
Complex ch(const Complex& z)
{
	return exp(2 * z.Im() + exp(-2 *z.Im())) / 2;
}

Complex cos1(const Complex& z)
{
	return (cos(z.Re())*ch(z.Im()),-sin(z.Re())*sh(z.Im()));
}

double Complex::Re() const
{
	return re;
}
double Complex::Im() const
{
	return im;
}
double Complex::R() const
{
	return sqrt(pow(re, 2) + pow(im, 2));
}
double Complex:: Phi() const
{
	return atan(im/re);
}
/*////////////////////////////////////////////////////////*/
Complex operator*(double n, const Complex& z)
{
	return Complex(n * z.Re(), n* z.Im());
}
Complex operator^(const Complex& z,double n) 
{
	return Complex(pow(z.Re(), n) *(cos(n*z.Phi())), pow(z.Re(), n) * (sin(n*z.Phi())));
}
Complex Complex::operator-(const Complex& ex)
{
	return Complex(re - ex.Re(), im - ex.Im());
}
Complex Complex::operator+(const Complex& ex)
{
	return Complex(re + ex.Re(), im + ex.Im());
}
/*////////////////////////////////////////////////////////*/
ostream& operator<<(ostream& out, const Complex& ex)
{
	out << "(" << ex.re << ", " << ex.im << ")";
	return out;
}
istream& operator>>(istream& in, Complex& ex)
{
	in >> ex.re >> ex.im;
	return in;
}
/*////////////////////////////////////////////////////////*/