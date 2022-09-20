#include <iostream>
using namespace std;
 
int main()
{
	int total = 0;
 
	int uno = 1;
	int dos = 2;
	int tres = 0;
 
	while (dos <= 4000000)
	{
		tres = uno + dos;
		if (dos % 2 == 0)
			total += dos;
		uno = dos;
		dos = tres;
	}
 
	cout << total;
 
	return 0;
}
