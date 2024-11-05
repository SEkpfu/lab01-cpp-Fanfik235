#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    ((a - b) < 0) ? cout << (max(b, c)) : (cout << a * a <<" " << b * b << " " << c * c);
}