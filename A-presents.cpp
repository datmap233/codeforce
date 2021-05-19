#include <iostream>
using namespace std;
void main()
{
	int n, a[101] = { 0 }, b[101] = { 0 };
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cin >> a[i];
		b[a[i]] = i;
	}
	for (int i = 1; i < n+1; i++)
	{
		cout << b[i];
		if (i != n )cout << " ";
	}
}