#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
    if (m < 1 || m > 16 || n < 1 || n > 16 || m > n)
        return 0;
    cout << ((m) * (n)) / 2;
}