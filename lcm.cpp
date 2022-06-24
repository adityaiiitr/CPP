#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans, a, b;
    cout << "Enter The Numbers:";
    cin >> a >> b;
    for (int i = max(a, b);; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}