#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 150)
        return 0;
    char a[10];
    int count = 0;
    for (int i =0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < 3;j++)
        {
            if (a[j] == '+')
            {
                count++;
                break;
            }
            if (a[j] == '-')
            {
                count--;
                break;
            }
        }
    }
    cout << count;
}