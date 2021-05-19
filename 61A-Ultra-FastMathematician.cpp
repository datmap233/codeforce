#include <iostream>
using namespace std;
char a[100000], b[100000];
int main()
{
    cin >> a >> b;
    int i = 0;
    while (a[i] != NULL)
    {
        int m, k, l;
        if (a[i] == '0')
            m = 0;
        else
            m = 1;
        if (b[i] == '0')
            k = 0;
        else
            k = 1;
        l = m^k;
        cout << l;
        i++;
    }
    return 0;
}