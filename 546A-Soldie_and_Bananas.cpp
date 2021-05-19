#include <iostream>
using namespace std;
int loan(int k, int n, int w)
{
    int m = 0;
    for (int i = 1; i <= w; i++)
        m += k*i;
    return m - n;
}
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    //w số quả chuối
    //n có trong túi
    //k gia 1 quả chuối
    cout << loan (k,n,w);

}
