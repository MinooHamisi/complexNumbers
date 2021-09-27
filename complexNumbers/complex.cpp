#include "complex.h"
#include <iostream>
using namespace std;

complex::complex(int r, int i)
{
	real = r;
	image = i;
}
//--------------------------------------------
void complex::output()
{
	cout << real << "+" << image << "i\n";
}
//--------------------------------------------
void complex::input()
{
	cout << "please enter real:\n";
	cin >> real;
	cout << "please enter the image:\n";
	cin >> image;
	output();
}
//--------------------------------------------
int complex::getReal()
{
	return real;
}
//--------------------------------------------
int complex::getImage()
{
	return image;
}
//--------------------------------------------
complex complex::operator+(const complex& C)
{
	complex temp;
	temp.real = real + C.real;
	temp.image = image + C.image;
	return temp;
}
//--------------------------------------------
complex complex::operator - (const complex& C)
{
	complex temp;
	temp.real = real - C.real;
	temp.image = image - C.image;
	return temp;
}

complex complex::operator*(const complex& C)
{
	//(a+bi)(c+di) = ac + adi + bci + bdi2 and i2=-1
	complex temp;
	temp.real = (real * C.real) - (image * C.image);
	temp.image = (real * C.image) + (image + C.real);
	return temp;
}
