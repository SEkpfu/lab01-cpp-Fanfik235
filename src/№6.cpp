#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    cout << "n = "; cin >> n;
    const double g = 180 / M_PI;
    double S;
    for (int i = 2; i <= 2 * n; i+= 2)
    {
        x += i;
        S += cos(x * g);
    }
    cout << "S = " << S;
}