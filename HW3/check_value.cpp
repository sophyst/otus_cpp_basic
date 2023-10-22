#include <iostream>

bool check_int_value(const int target_value) {

	int current_value = 0;

	std::cout << "Enter your guess:" << std::endl;
	std::cin >> current_value;

	if (current_value > target_value) {
		std::cout << "less than " << current_value << std::endl;
	}
	else if (current_value < target_value) {
		std::cout << "greater than " << current_value << std::endl;
	}
	else {
		std::cout << "you win!" << std::endl;
		return true;
	}

	return false;
}