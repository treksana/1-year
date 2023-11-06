#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    double sum;
    sum = 0;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    for (int i = 1; i <= n; i++)
        sum += pow(i, k);
    cout << sum;
    return 0;
}
