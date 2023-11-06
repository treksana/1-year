#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, k, h, c = 0;
	cout << "n = ";
	cin >> n;
	cout << "k = ";
	cin >> k;
	h = n;
	while (h > 0)
	{
		h = h / 10;
		c++;
	}
	if (c > k)
	{
		cout << int(n / pow(10, c - k));
	}
	if (c == k)
	{
		cout << n;
	}
	if (c < k)
	{
		cout << "Try again";
	}
	return 0;
}