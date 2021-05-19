#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 2], count = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int min = a[1], max = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (max == a[i])
        {
            for (int j = i; j > 1; j--)
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                count++;
            }
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (min == a[i])
        {
            for (int j = i; j < n; j++)
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                count++;
            }
            break;
        }
    }
    cout << count;
}