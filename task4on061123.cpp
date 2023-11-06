#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float f = 1;
	int c;
	cout << "number of elements c = ";
	cin >> c;
	for (int i = 0; i < c - 1; i++)
		f = 1 / (1 + f);
	f = f + 1;
	cout << f << endl;
	return 0;
}