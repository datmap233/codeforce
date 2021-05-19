#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cin >> x;
    while (1)
    {
        count++;
        if (x >= 5)
            x -= 5;
        else if (x < 5)
            x -= x;
        if (x == 0)
            break;
    }
    cout << count;
}