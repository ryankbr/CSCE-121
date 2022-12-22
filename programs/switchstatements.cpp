#include <iostream>

int main() {
    char letter = '0';
    std::cout << "Enter a lowercase letter" << std::endl;
    std::cin >> letter;

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        std::cout << letter << " is a vowel" << std::endl;
        break;

        case 'y':
        std::cout << letter << " is sometimes a vowel" << std::endl;
        break; 

        default:
        std::cout << letter << " is not a vowel" << std::endl;
    }

    return 0;
}