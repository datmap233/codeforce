#include <iostream>
#include <string.h>
using namespace std;
char upper(char a)
{
    if (a >= 'a' && a <= 'z')
        return a - ('a' - 'A');
    return a;
}
char lower(char a)
{
    if (a >= 'A' && a <= 'Z')
        return a + ('a' - 'A');
    return a;
}
bool check(char a[])
{
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            count++;
    }
    int n = strlen(a);
    if (n % 2 == 0)
        n /= 2;
    else
        n = (n - 1) / 2 + 1;
    if (count >= n)
        return 0;
    return 1;
}
int main()
{
    char a[101];
    cin >> a;
    if (check(a))
        for (int i = 0; i < strlen(a); i++)
            a[i] = upper(a[i]);
    else
        for (int i = 0; i < strlen(a); i++)
            a[i] = lower(a[i]);
    cout << a;
    system("pause");
    return 0;
}