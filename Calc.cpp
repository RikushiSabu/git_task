#include "Calc.h"

void Calc::set(int num1, int num2)
{
	m_num1 = num1;
	m_num2 = num2;
}

int Calc::add(int num1, int num2)
{
	m_num3 = m_num1 + m_num2;

	return m_num3;
}

int Calc::sub(int num1, int num2)
{
	m_num3 = m_num1 - m_num2;

	return m_num3;
}

int Calc::mult(int num1, int num2)
{
	m_num3 = m_num1 * m_num2;

	return m_num3;
}

int Calc::div(int num1, int num2)
{
	m_num3 = m_num1 / m_num2;

	return m_num3;
}