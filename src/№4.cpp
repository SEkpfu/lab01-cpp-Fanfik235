#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "x = "; cin >> x;
    double p;
    if(x <= -10)
    {
        p = 89 / 7.0;
    }
    else if(x > -10 && x <= 0)
    {
        p = sqrt(abs(10 - pow(x, 2)));
    }
    else
    {
        p = cos(M_PI * (x + 1));
    }
    cout << "p = " << p;
}