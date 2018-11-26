#pragma once

class Calc
{
	public:
		void set(double num1, double num2);
		double add(double num1, double num2);
		double sub(double num1, double num2);
		double mult(double num1, double num2);
		double div(double num1, double num2);
	private:
		double m_num1;
		double m_num2;
		double m_num3;
};

