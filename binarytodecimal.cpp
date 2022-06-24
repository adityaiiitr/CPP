#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
long int btod(int);
int main()
{
    int n;
    cin >> n;
    int binary = btod(n);
    cout << "Binary Of " << n << " is " << binary;

    return 0;
}
inline long int btod(int n)
{
    int bin = 0, p = 0;
    while (n != 0)
    {
        bin += (n % 2) * pow(10, p);
        n /= 2;
        p++;
    }
    return bin;
}