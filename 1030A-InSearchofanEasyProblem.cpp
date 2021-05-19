#include <iostream>
using namespace std;
int main()
{
    int n, m[105];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> m[i];
    for (int i = 0; i < n; i++)
        if (m[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
    cout << "EASY";
    return 0;
}