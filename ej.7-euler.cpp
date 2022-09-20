#include <iostream>

bool es_primo(int num) {
    for (int i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 2;
    for (int i = 5; ; i = i+2)
    {
        if (es_primo(i))
        {
            count++;
        }
        if (count == 10001)
        {
            std::cout << i;
            return 0;
        }
    }
}
