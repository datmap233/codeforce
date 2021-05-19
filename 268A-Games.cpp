#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[100][100];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 2; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;
            if (a[j][2] == a[i][1])
                count++;
        }
    }
    cout << count;
}