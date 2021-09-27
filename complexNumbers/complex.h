#pragma once
#include <iostream>
using namespace std;
class complex
{
private:
	int real;
	int image;
public:
	complex() :real (0), image (0) {}
	complex(int, int);
	void output();
	void input();
	int getReal();
	int getImage();
	complex operator + (const complex& C);
	complex operator - (const complex& C);
	complex operator * (const complex& C);
};

