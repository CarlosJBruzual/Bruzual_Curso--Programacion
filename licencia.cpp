#include <iostream>

int main () {
    int edad;
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    if (edad < 18) {
        std::cout << "Eres menor de edad y no puedes conducir." << std::endl;
    } else if (edad >= 18 && edad <= 65) {
        std::cout << "Eres mayor de edad y puedes conducir." << std::endl;
    } else {
        std::cout << "Eres un adulto mayor, no puedes conducir." << std::endl;
    }

    return 0;
}

