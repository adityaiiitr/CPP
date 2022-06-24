#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, n;
    cout << "Enter Number of Terms:";
    cin >> n;
    cout << "0 1 ";
    while (n - 2 != 0)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        n--;
    }
    return 0;
}