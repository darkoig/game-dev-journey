#include <iostream>

int readNumber();
void writeAnswer(int result);

int main() {
	int first_operand = readNumber();
	int second_operand = readNumber();

	int result = first_operand + second_operand;

	writeAnswer(result);


	return 0;
}