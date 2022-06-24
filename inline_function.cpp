#include <bits/stdc++.h>
using namespace std;

inline int getMax(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << getMax(10, 20);
    return 0;
}

/*
Inline Function implementation is done by compiler as it is replaced
with the function call. So it does optimization when implemented as
it saves time of function calling

How Inline is better than macros?
ANS: As the macros dont have type checking items are just replaced without checking
and also the output of this program is affected

#define add(x,y) x+y
int main()
{
    cout<<4*add(10,20); //here output will be 60 instead of 120
    return 0;
}

*/