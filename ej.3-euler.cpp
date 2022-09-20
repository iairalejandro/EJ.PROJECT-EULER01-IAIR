#include <iostream>
using namespace std;

int main()
{
    long long mayorFactor = 600851475143;

    for (long long i = 3; i <= mayorFactor; i += 2)
    {
        if (mayorFactor % i == 0) {
            if (mayorFactor / i >= i) {
                mayorFactor /= i;                 
                i -= 2;                             
            }                                       
        }
    }

    cout << "El mayor factor primo de 600851475143 es:\n" << mayorFactor << endl;
    return 0;
} 
