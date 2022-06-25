#include <bits/stdc++.h>
using namespace std;
int count_distinct(int arr[], int n)
{
    int count = 0;
    bool isDistict = true;

    for (int i = 0; i < n; i++)
    {
        isDistict = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistict = false;
                break;
            }
        }
        if (isDistict == true)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr)
        cin >> x;
    for (int &x : arr)
        cout << x << " ";
    cout << "\n";
    cout << count_distinct(arr, n);
    return 0;
}