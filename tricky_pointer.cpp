#include <iostream>
using namespace std;
void fun(int arr[]) // arr is pointer allocated 8 bytes so its printing only one
{
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << n << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    fun(arr);
    return 0;
}