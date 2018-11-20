#pragma once

class Calc
{
	public:
		void set(int num1, int num2);
		int add(int num1, int num2);
		int sub(int num1, int num2);
		int mult(int num1, int num2);
		int div(int num1, int num2);
	private:
		int m_num1;
		int m_num2;
		int m_num3;
};

