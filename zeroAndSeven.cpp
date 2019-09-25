#include <iostream>
#include <string>
#include <cstdlib>


std::string reverse(std::string);
std::string toBinary(int);

int main() {
	int number = 0;
	std::string s = "";
	std::string n = "";

	do {
		n = "";
		std::cout << "Enter INTEGER number(> 0): ";
		std::cin >> n;
		if (n[0] == '+') {
			n = n.substr(1, n.length() - 1);
		}
		number = std::atoi(n.c_str());
		s = std::to_string(number);
	} while (s == "" || number <= 0 || s != n);

	std::cout << "Your number is: " << number << std::endl;

	std::string binar = toBinary(number - 1);
	std::cout << "Number from sequance is: " << binar << std::endl;

	return 0;
}

std::string reverse(std::string binar) {
	int size = binar.length();
	std::string newString = "";

	for (int i = size; i > 0; --i) {
		newString += binar[i - 1];
	}

	return newString;
}

std::string toBinary(int number) {
	std::string binar = "";	
	while (number > 0) {
		binar += std::to_string((number % 2) * 7);
		number /= 2;
	}

	binar = reverse(binar);
	return binar;
}
