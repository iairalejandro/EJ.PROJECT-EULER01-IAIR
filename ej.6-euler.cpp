#include <iostream>

using namespace std;

int main()
{
    long sumOfSquares = 0;
    long sum = 0;
    long squareOfSums = 0;

    for (int i = 1; i < 101; i++){sumOfSquares += i*i; sum += i;}
    squareOfSums = sum*sum;
    cout << abs(squareOfSums-sumOfSquares) << endl;
    return 0;
}
