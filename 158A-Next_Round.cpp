#include <iostream>
using namespace std;
int main ()
{
    // n =so nguoi
    //k=nguoi thu
    int n, k, a[1000], count = 0;
    cin >> n >> k;
    if (n < 1 || k<1 || n>50 || k>50)
        return 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            continue;
        if (a[i] >= a[k-1])
            count++;
    }
    cout << count;
    return 0;
}