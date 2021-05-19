#include <iostream>
using namespace std;
bool check(int n)
{
    int a[10], i = 0;
    while (n != 0)
    {
        int m = n % 10;
        a[i] = m;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == m)
                return 0;
        }
        i++;
        n /= 10;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    while (1)
    {
        n += 1;
        if (check (n) == 1)
            break;
    }
    cout << n;
}