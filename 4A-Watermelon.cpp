#include <iostream>
using namespace std;
bool check (int w)
{
    if (w % 2 != 0 || w == 2)
        return false;
    return true;
}
int main ()
{
    int w;
    cin >> w;
    if (w < 1 && w > 100)
        return 0;
    else if (check (w))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}