#include <iostream>

int main(int arg, char *argv[])
{
    int resultado(0);
    for (int i = 1; i < 1000; ++i) {
        if (!(i % 3 && i % 5)) {
            resultado += i;
        }
    }
    std::cout << "Resultado: " << resultado << "\n";
    return 0;
}
