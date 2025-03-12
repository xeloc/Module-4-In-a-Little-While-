#include <iostream>
#include <cstdlib>
#include <ctime>

//Part 1

int main() {
	// random number generator
	std::srand(time(0));
	int randomnumber = std::rand() % 10 + 1;
	int userguess;

	std::cout << "Guess the number (between 1 and 10): ";

	while (true) {
		std::cin >> userguess;

		if (userguess < randomnumber) {
			std::cout << "Too low. Try again: ";
		}
		else if (userguess > randomnumber) {
			std::cout << "Too high. Try again: ";
		}
		else {
			std::cout << "Correct! The number was " << randomnumber << ".\n";
			break;
		}
	}

	//Part 2

	const std::string secretPW = "JesusLovesYou!";
	std::string userguessPW;

	std::cout << "Enter the secret password: ";

	while (true) {
		std::cin >> userguessPW;

		if (userguessPW == secretPW) {
			std::cout << "Access Granted!\n";
			break;
		}
		else {
			std::cout << "Incorrect. Try again: ";
		}

	}
	return 0;
}