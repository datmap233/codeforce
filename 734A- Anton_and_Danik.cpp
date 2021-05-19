#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, count_a = 0, count_d = 0;
    char a[100001];
    cin >> n >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'A')
            count_a++;
        else if (a[i] == 'D')
            count_d++;
    }
    if (count_a > count_d)
        cout << "Anton";
    else if (count_a < count_d)
        cout << "Danik";
    else
        cout << "Friendship";
}