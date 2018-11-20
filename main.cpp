
#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	Calc obj;
	int num1 ,num2;

	cout << "2つの整数を入力してください" << endl;
	cout << "整数1: ";
	cin >> num1;
	cout << "整数2: ";
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