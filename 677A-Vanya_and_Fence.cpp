#include <iostream>
using namespace std;
int main()
{
    int n, h, a[3000], count = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
            count += 2;
        else
            count += 1;
    }
    cout << count;
}