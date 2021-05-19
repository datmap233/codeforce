#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[5000][5000];
    cin >> n;
    if (n < 1 || n > 1000)
        return 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    int count1, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        count1 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                count1++;
        }
        if (count1 < 2)
            count2++;
    }
    cout << count2;
    return 0;
}