#include <iostream>

int main(){
	int first_operand = 0;
	int second_operand = 0;

	std::cout << "Enter an integer: ";
	std::cin >> first_operand;
	std::cout  << "Enter another integer: ";
	std::cin >> second_operand;
	std::cout << first_operand << " + " << second_operand << " is " << first_operand + second_operand << "\n";
	std::cout << first_operand << " - " << second_operand << " is " << first_operand - second_operand << "\n";

	return 0;
}