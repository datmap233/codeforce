#include <iostream>
#include <string.h>
using namespace std;
char upper (char a)
{
    if (a >= 97 && a <= 122)
        return a - 32;
    return a;
}
int main()
{
    char a[1001];
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (i == 0)
            a[i] = upper (a[i]);
    }
    cout << a;

}