#include <iostream>

int readNumber() {
	int user_input = 0;
	std::cout << "Enter an integer: ";
	std::cin >> user_input;
	return user_input;
}

void writeAnswer(int result) {
	std::cout << result;
}

int main() {
	int first_operand = readNumber();
	int second_operand = readNumber();

	int result = first_operand + second_operand;

	writeAnswer(result);


	return 0;
}