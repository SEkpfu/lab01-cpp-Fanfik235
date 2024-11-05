#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        double x, y; int  k = 0;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        if(x <= 2 && x >= 0 && y <= 4 && y >= 0)
        {
            if(y <= -2*x + 4){
                k += 1;
                cout << "Входит" << endl;
            }
            else{
                cout << "Не входит" << endl;
            }
        }
        else if(x <= 0 && x >= -4 && y <= 4 && y >= 0)
        {
            if (x * x + y * y <= 16)
            {
                k += 1;
                cout << "Входит" << endl;
            }
            else
            {
                cout << "Не входит" << endl;
            }
        }
        else if(x <= 0 && x >= -4 && y >=  -4 && y <= 0)
        {
            if (y >= -x -4)
            {
                k += 1;
                cout << "Входит" << endl;
            }
            else
            {
                cout << "Не входит" << endl;
            }
        }
        else if(x >= 0 && x <= 2 && y <= 0 && y >= -4)
        {
            k += 1;
            cout << "Входит" << endl;
        }
        else
        {
            cout << "Не входит" << endl;
        }
    }
    
}