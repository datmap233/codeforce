#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[3], count = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> a[j];
        count -= a[0];
        count += a[1];
        if (i == n - 1)
            count = 0;
        if (count > max)
            max = count;
    }
    cout << max;
}