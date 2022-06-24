#include <iostream>
#include <iomanip>
#include <math.h>
// Call by Refernce is Different int &a=b;
using namespace std;
void swap(int *, int *);
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "Original Numbers" << endl
         << "A: " << a << " B:  " << b << endl;

    swap(&a, &b);
    cout << "Swapped Numbers" << endl
         << "A: " << a << " B:  " << b;

    return 0;
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}