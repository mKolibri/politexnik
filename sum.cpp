#include <iostream>
#include <string>
#include <cstdlib>

int initNumber(int k) {
	int number = 0;
	std::string s = "";
        std::string n = "";
        
	do { 
                n = "";
		switch (k) {
			case 1: 
		                std::cout << "Enter 1st INTEGER number: ";
				break;
			case 2: 
		                std::cout << "Enter 2nd INTEGER number: ";
				break;
			case 3: 
		                std::cout << "Enter 3rd INTEGER number: ";
		}
                
		std::cin >> n; 
                if (n[0] == '+') { 
                        n = n.substr(1, n.length() - 1); 
                } 
                number = std::atoi(n.c_str()); 
                s = std::to_string(number); 
        } while (s == "" || s != n); 

	return number;
}
	
int main() {
	int a = initNumber(1);
	int b = initNumber(2);
	int c = initNumber(3);

	std::string sum = std::to_string(a + b + c);
	std::cout << "Sum of " << a << ", " << b << ", " << c
		<< " numbers is: " << sum << std::endl;
	int number = 0;
	int size = sum.length();
	
	for (int i = 0; i < size; ++i) {
		if (sum[i] == '0') {
			++number;
		}
	}

	std::cout << "Number of 0-s in number " << sum
		<< " is: " << number << std::endl;
	
	return 0;
}
