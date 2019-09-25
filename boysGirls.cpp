#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int initNumber(int k) {
        int number = 0;
        std::string s = "";
        std::string n = "";

        do {
                n = "";
                switch (k) {
                        case 1:
                                std::cout << "Enter boy's count(>= 0): ";
                                break;
                        case 2:
                                std::cout << "Enter girl's count(>= 0): ";
                                break;
                        case 3:
                                std::cout << "Enter groups count(>= 0): ";
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
        int boys = initNumber(1);
        int girls = initNumber(2);

	int students = boys + girls;
	std::cout << "*** There are " << students << " students in the class)\n";

	int groups = initNumber(3);
	int studCount = ceil(students / (double)groups);
	int lessStudents = studCount * groups - students;

	std::cout << "Must increase " << lessStudents << " students !\n";
	return 0;
}
