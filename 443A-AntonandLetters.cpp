#include <iostream>
#include <string.h>
using namespace std;
bool check(char a[], char b, int i)
{
    for (int j = i - 1; j >= 0; j--)
    {
        if (b == a[j])
            return 0;
    }
    return 1;
}
int main()
{
    char a[1001];
    cin.getline(a, 1001);
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[1] == '}')
            break;
        if (i == 1)
            count++;
        else if (a[i] >= 97 && a[i] <= 122)
        {
            if (check(a, a[i], i))
                count++;
        }
    }
    cout << count;
}