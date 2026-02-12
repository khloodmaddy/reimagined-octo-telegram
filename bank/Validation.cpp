#include "Validation.h"

bool Validation::isAlphabetic(const string& name) {
	for (char c : name) {
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' '))
			return false;
	}

	return true;
}

bool Validation::isValidName(const string& name) {
	if (name.size() < 5 || name.size() > 20) return false;
	return isAlphabetic(name);
}

bool Validation::isValidPassword(const string& password) {
	return password.size() >= 8 && password.size() <= 20;
}

bool Validation::isValidBalance(double balance) {
	return balance >= 1500;
}

bool Validation::isValidSalary(double salary) {
	return salary >= 5000;
}