#include "calculator.h"

// Addition operation
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// Substraction operation
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// Multiplication operation
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Division operation
int Calculator::Div (double a, double b)
{
    return Mul (a, 1/b);
}