#include <iostream>
using namespace std;
void move(int a[][10])
{
    int i, j, count = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            if (a[i][j] == 1)
                break;
        if (a[i][j] == 1)
            break;
    }
    a[i][j] = 0;
    if (i < 3)
    {
        while (i != 3)
        {
            i++;
            count++;
        }
    }
    else if (i > 3)
    {
        while (i != 3)
        {
            i--;
            count++;
        }
    }
    if (j < 3)
    {
        while (j != 3)
        {
            j++;
            count++;
        }
    }
    else if (j > 3)
    {
        while (j != 3)
        {
            j--;
            count++;
        }
    }
    a[i][j] = 1;
    cout << count;
}
int main()
{
    int a[10][10];
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> a[i][j];
    move(a);
}