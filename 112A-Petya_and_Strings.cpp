#include <iostream>
#include <string.h>
using namespace std;
char change (char a)
{
    if (a >= 'a' && a <= 'z')
        return a + 'A' -'a';
    return a;
}
void up (char a[])
{
    for (int i = 0; i < strlen(a); i++)
        a[i] = change(a[i]);
 
}
int main ()
{
    char a[200], b[200];
    cin >> a;
    cin >> b;
    up(a);
    up(b);
    int n = strcmp(a,b);
    if (n < 0)
        n = -1;
    else if (n > 0)
        n = 1;
    else n = 0;
    cout << n;
}