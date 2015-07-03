// MyExecRefsDll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathFuncsDll.h"

#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 7.4;
	int b = 99;

	cout << "Addition: " << MathFuncs::MyMathFuncs::Add(a, b) << endl;
	cout << "Substraction: " << MathFuncs::MyMathFuncs::Substract(a, b) << endl;
	cout << "Addition: " << MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	cout << "Multiplication: " << MathFuncs::MyMathFuncs::Divide(a, b) << endl;

	return 0;
}

