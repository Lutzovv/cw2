#include <iostream>

double Addition(double num1, double num2) {
	return num1 + num2;
}

double Subtraction(double num1, double num2) {
	return num1 - num2;
}

double Multiplication(double num1, double num2) {
	return num1 * num2;
}

double Division(double num1, double num2) {
	return num1 / num2;
}

double Percent(double num1, double num2) {
	return (num1 * num2) / 100;
}

int main() {

	double num1, num2, result;
	char action;

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter action (+, -, /, *, %): ";
	std::cin >> action;

	do {
		std::cout << "Enter second number: ";
		std::cin >> num2;
	} while (action == '/' && num2 == 0);

	if (action == '+') {
		result = Addition(num1, num2);
	}
	else if (action == '-') {
		result = Subtraction(num1, num2);
	}
	else if (action == '*') {
		result = Multiplication(num1, num2);
	}
	else if (action == '/') {
		result = Division(num1, num2);
	}
	else if (action == '%') {
		result = Percent(num1, num2);
	}

	std::cout << num1 << " " << action << " " << num2 << " = " << result;

	return 0;
}