#include <iostream>

int main(void)
{
    int zahl1;
    int zahl2;
    int ergebnis;

    zahl1 = 4;
    zahl2 = 3;

    ergebnis = zahl1 * zahl2;
    std::cout << "Ergebnis Multiplikation: " << ergebnis << std::endl;

    ergebnis = zahl1 + zahl2;
    std::cout << "Ergebnis Addition: " << ergebnis << std::endl;

    ergebnis = zahl1 - zahl2;
    std::cout << "Ergebnis Subtratkion: " << ergebnis << std::endl;

    ergebnis = zahl1 / zahl2;
    std::cout << "Ergebnis Division: " << ergebnis << std::endl;

    bool binIchReich = false;
    std::cout << "Bool (false): " << binIchReich << std::endl;

    // 8bit
    char buchstabe1 = 'a'; // 97
    std::cout << "Char (a): " << buchstabe1 << std::endl;

    // 8bit
    char buchstabe2 = 'A'; // 65
    std::cout << "Char (a): " << buchstabe2 << std::endl;

    unsigned char uBuchstabe = 'a'; // 97
    std::cout << "Unsigned Char (a): " << uBuchstabe << std::endl;

    // 16bit
    short sZahl = 32767;
    std::cout << "Short: " << sZahl << std::endl;

    // 32bit
    int iZahl = 2000000;
    std::cout << "int: " << iZahl << std::endl;

    // 64bit
    long long lZahl = 9223372036854775807;
    std::cout << "long long: " << lZahl << std::endl;

    // 32bit
    float fZahl = 10.1;
    std::cout << "float: " << fZahl << std::endl;

    // 64bit
    double dZahl = 0.1;
    std::cout << "double: " << dZahl << std::endl;

    // input
    double inputZahl1 = 0.0;
    double inputZahl2 = 0.0;

    std::cout << "Zahl 1 eingeben: ";
    std::cin >> inputZahl1;

    std::cout << "Zahl 2 eingeben: ";
    std::cin >> inputZahl2;

    std::cout << "Ergebnis Multiplikation: " << inputZahl1 * inputZahl2 << std::endl;

    return 0;
}
