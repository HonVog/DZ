#pragma once
#include <iostream>
using namespace std;


class Number
{
	int i, f;
public:
	Number(int pI, int pF) :i {pI}, f {pF} {}
	Number() :Number(0, 0) {}

	// Геттеры
	int getI() const;
	int getF() const;

	int getInumbe() { return Number::i; }

	//Метод сложения
	void SUM(Number& number2) {
		f *= number2.getF();
		i = (i * number2.getF() + number2.getI() * f);
	}

	void SUM(int number2) {	i += (number2 * f);}

	void SUM(double number2) {
		int notNull = 1;
		double sNull = number2;
		while ((sNull - (int)sNull) > 0) {
			sNull *= 10;
			notNull *= 10;
		}
		f *= notNull;
		i = i * notNull + (int)number2 * notNull;
	}

	// Метод вычитания
	void DIFF(Number& number2) {
		f = f * number2.getF();
		i = i * number2.getF() - number2.getI() * f;
	}
	void DIFF(int number2) {
		i -= (number2 * f);
	}
	void DIFF(double number2) {
		int notNull = 1;
		double sNull = number2;
		while ((sNull - (int)sNull) > 0) {
			sNull *= 10;
			notNull *= 10;
	    }
		f *= notNull;
		i = i * notNull - (int)number2 * notNull;
	}

	//Метод умножения
	void MULT(Number& number2) {
		f = f * number2.getF();
		i = i * number2.getI();
	}

	void MULT(int number2) {
		i *= number2;
	}

	void MULL(double number2) {
		int notNull = 1;
		double sNull = number2;
		while ((sNull - (int)sNull) > 0) {
			sNull *= 10;
			notNull *= 10;
		}
		f = (f * notNull) * ((number2 * (int)number2) * notNull);
		i = i * notNull * (int)number2 * notNull;

	}

	//Метод деления
	void DIVIS(Number& number2) {
		f = f * number2.getI();
		i = i * number2.getF();
	}

	void DIVIS(int number2) {
		f *= number2;
	}

	void DIVIS(double number2) {
		int notNull = 1;
		double sNull = number2;
		while ((sNull - (int)sNull) > 0) {
			sNull *= 10;
			notNull *= 10;
		}
	    f = (f * notNull) * (int)number2 * notNull;
	    i = i * notNull * ((number2 * (int)number2) * notNull);
	}

};

int Number::getI() const { return Number::i; }
int Number::getF() const { return Number::f; }

