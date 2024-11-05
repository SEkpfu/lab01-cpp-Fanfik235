#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x; int z = x, res;
        if(x % 2 == 0)
        {
            a += x;
        }
        if (abs(x) % 100 == 55)
        {
            c += 1;
        }
        while(z > 0)
        {
            res = z;
            z = (z / 10) % 10;
        }
        if (res == 3)
        {
            b *= x;
        }
    }
    cout << "а = " << a << endl << "b = " << b << endl << "c = " << c;
}