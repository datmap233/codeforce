#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, t;
    char s[100];
    cin >> n >> t >> s;
    while (t != 0)
    {
        for (int i = 1; i<strlen(s) ;i++)
        {
            if ( s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
        t--;
    }
    cout << s;
    return 0;
}
