#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 50 || n < 1)
    return 0;
    char a[55];
    cin >> a;
    int count = 0;
    for (int i = 1; i < n; i++)
        if (a[i] == a[i-1])
            count++;
    cout << count;
}