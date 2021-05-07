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

    return 0;
}
