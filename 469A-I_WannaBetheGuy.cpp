#include <iostream>
#include <algorithm>
using namespace std;
void _sort(int a[], int k, int m)
{
    for (int i = 1; i <= k + m -1; i++)
        for (int j = i+1; j <= k + m; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}
int main()
{
    int n, count = 0;
    cin >> n;
    int m;
    cin >> m;
    int a[500];
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    int k;
    cin >> k;
    for (int i = m + 1; i <= m + k; i++)
        cin >> a[i];
    _sort(a, k, m);
    for (int i = 1; i <= m + k; i++)
    {
        if (a[i] != a[i + 1])
            count++;
    }
    if (count == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}