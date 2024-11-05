#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите стороны основания параллелипипеда" << endl;
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Введите угол между ними" << endl;
    int g; cin >> g;
    cout << "Введите высоту ";
    double h; cin >> h;
    double V;
    V = (a * b * sin((M_PI / 180.0) * g)) * h;
    cout << "V = " << V;
}