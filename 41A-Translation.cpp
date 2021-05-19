#include <iostream>
#include <string.h>
using namespace std;
bool check(char a[], char b[])
{
    for (int i = 0, j = strlen(b) - 1; i < strlen(a) && j >= 0; i++, j--)
    {
        if (a[i] != b[j])
        return 0;
    }
    return 1;
}
int main ()
{
    char a[101], b[101];
    cin >> a >> b;
    if (check(a,b))
        cout << "YES";
    else
        cout << "NO";
}