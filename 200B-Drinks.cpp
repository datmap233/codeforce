#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n], b = 0, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] /= 100;
        b += a[i];
    }
    c = b / n * 100;
    cout.precision(12);
    cout << fixed << c;
}