//============================================================================
// Name        : prog_N_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	cout << "Введите целое число №1: ";
	cin >> a;
	cout <<endl << "Введите целое число №2: ";
	cin >> b;
	cout <<endl <<"Произведение введенных чисел = :" << a * b <<endl;
	cout <<endl <<"Число №1 в степени числа №2 = " << pow (a, b) <<endl;
	cin >>a;

	return 0;
}
