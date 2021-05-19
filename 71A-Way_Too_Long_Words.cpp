#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[1000];
    int n;
    cin >> n;
    if (n < 1 || n > 100)
        return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int m = strlen(a) - 2;
        if (strlen(a) <= 10)
            cout << a << endl;
        else
            cout << a[0] << m << a[strlen(a) - 1] << endl;
    }
    return 0;
}