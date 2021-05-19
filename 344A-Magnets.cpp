#include <iostream>
using namespace std;
char a[1000000];
int main()
{
    long long n, i = 0;
    cin >> n;
    for (long long j = 1; j <= n; j++)
    {
        int m;
        cin >> m;
        if (m == 1)
        {
            a[i] = '0';
            a[i + 1] = '1';
        }
        else
        {
            a[i] = '1';
            a[i + 1] = '0';
        }
        i += 2;
    }
    long long count = 1;
    for (long long k = 0; k <= n*2-2; k++)
    {
        if (a[k] == a[k + 1])
            count++;
    }
    cout <<  count;
    return 0;
}