
#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	Calc obj;
	double num1 ,num2;

	cout << "2つの実数を入力してください" << endl;
	cout << "実数1: ";
	cin >> num1;
	cout << "実数2: ";
	cin >> num2;

	obj.set(num1, num2);
	cout << "和: ";
	cout << obj.add(num1, num2) << endl;
	cout << "差: ";
	cout << obj.sub(num1, num2) << endl;
	cout << "積: ";
	cout << obj.mult(num1, num2) << endl;
	cout << "商: ";
	cout << obj.div(num1, num2) << endl;

	return 0;
}