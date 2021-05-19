#include <iostream>
#include <string.h>
using namespace std;
void _delete (char a[])
{
    int j = 0;
    for (int i = 0; i < strlen(a); i+=2)
    {
        if (i > 1)
        {
            j++;
            a[j] = a[i];
        }
    }
    a[j+1] = '\0';
}
bool check (char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (((int)a[i] > (int)a[i+1]) && ((i+1) < strlen(a)))
            return false;
    }
    return true;
}
void change (char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (((int)a[i] > (int)a[i+1]) && ((i+1) < strlen(a)))
        {
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
        }
    }
}
int main ()
{
    char a[1000];
    cin >> a;
    _delete(a);
    while (check(a) == false)
        change(a);
    for (int i = 0; i < strlen(a); i++)
    {
        cout << a[i];
        if (i<strlen(a)-1)
        cout << "+";
    }
    return 0;
}