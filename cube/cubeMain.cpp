#include <iostream>
#include <string>

#include "cube.hpp"

int initNumber(int k) {
        int number = 0;
        std::string s = "";
        std::string n = "";
 
        do {
                n = "";
                switch (k) {
                        case 1:
                                std::cout << "Enter massa of painti for 1 side(>= 0): ";
                                break;
                        case 2:
                                std::cout << "Enter paint massa(>= 0): ";
                                break;
                        case 3:
                                std::cout << "Enter count of cubes(>= 0): ";
                                break;
                }

                std::cin >> n;
                if (n[0] == '+') {
                        n = n.substr(1, n.length() - 1);
                }
                number = std::atoi(n.c_str());
                s = std::to_string(number);
        } while (s == "" || s != n || number < 0);
 
        return number;
}

int main() {
	// initialization
	int a = initNumber(1);
	int b = initNumber(2);
	int n = initNumber(3);

	Cube* cube = new Cube();
	cube->init(a, b, n);
	cube->print();
	delete cube;
	return 0;
}
