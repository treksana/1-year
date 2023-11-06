#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, k = 2;
	cout << "Number x = ";
	cin >> x;
	for (int i = 2; i < x / 2; i++)
	{
		if (x % i == 0)
			k++;
	}
	if (x == 1)
		cout << "This is number one";
	if (k == 2 && x != 1)
		cout << "This is a prime number";
	if (k != 2)
		cout << "This is not a prime number";
	return 0;
}