#include <iostream>
#include <string>
#include <cstdlib>

// 4 - 9       -->  6    pages  | 1 charecters | 6
// 10 - 99     -->  90   pages  | 2 charecters | 180
// 100 - 999   -->  900  pages  | 3 charecters | 2700

int cinChars();
int getPages(int);

int main() {
	int chars = cinChars();
	int pages = getPages(chars);
	std::cout << "Pages count : " << pages << std::endl;
        return 0;
}

int cinChars() {
	int number = 0;
        std::string s = "";
        std::string n = "";

        do {
                n = "";
                std::cout << "Enter charecters count for book numbering(1 ≤ N ≤ 10000): ";
                std::cin >> n;
                if (n[0] == '+') {
                        n = n.substr(1, n.length() - 1);
                }
                number = std::atoi(n.c_str());
                s = std::to_string(number);
        } while (s == "" || number <= 0 || s != n || number > 10000);
        std::cout << "Charecters number is: " << number << std::endl;
	
	return number;
}

int getPages(int chars) {
	if (chars < 7) {
		return chars + 3;
	} else if (chars < 187) {
		return (chars - 6) / 2 + 9;
	} else {
		return (chars - 186) / 3 + 99; 
	}
}
