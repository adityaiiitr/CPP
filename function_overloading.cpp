// Illustration Of Function Overloading & Max of 2 and 3 numbers
#include <bits/stdc++.h>
using namespace std;
/*
int myMax(int x, int y)
{
    return x > y ? x : y;
}

int myMax(int x, int y, int z)
{
    return myMax(myMax(x, y), z);
}
int main()
{
    int a = 10, b = 30, c = 5;
    cout << myMax(a, b) << "\n";
    cout << myMax(a, b, c) << "\n";
    return 0;
}
*/
// Illustration 2
void print(string s)
{
    cout << s << "\n";
}
void print(int s)
{
    cout << s << "\n";
}
void print(char s) // Try Removing this you will still get as it is matched with best suited data type
{
    cout << s << "\n";
}
int main()
{
    print('a');
    print(10);
    print("GFG");
    return 0;
}