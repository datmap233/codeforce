#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, count, i = 0;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << b - a % b << endl;
    }
    return 0;
}