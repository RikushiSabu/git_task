#include "Calc.h"

void Calc::set(double num1, double num2)
{
	m_num1 = num1;
	m_num2 = num2;
}

double Calc::add(double num1, double num2)
{
	m_num3 = m_num1 + m_num2;

	return m_num3;
}

double Calc::sub(double num1, double num2)
{
	m_num3 = m_num1 - m_num2;

	return m_num3;
}

double Calc::mult(double num1, double num2)
{
	m_num3 = m_num1 * m_num2;

	return m_num3;
}

double Calc::div(double num1, double num2)
{
	m_num3 = m_num1 / m_num2;

	return m_num3;
}