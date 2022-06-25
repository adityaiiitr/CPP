#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    int res = str.find("eek");
    if (res == string::npos) // meaning of this line? npos=-1 so if not pressent then it gives -1
        cout << "NOT Present";
    else
        cout << "First Occurence at index " << res;

    cout << "\nEnter The String: "; // takes only first word
    cin >> str;

    cout << str << "\n";
    cout << "Enter The String: ";
    getline(cin, str); // takes full string
    getline(cin, str);
    cout << str << "\n";
    cout << "Enter The String with # at end: ";
    getline(cin, str, '#'); // takes input till #
    cout << str << "\n";
    for (auto it = str.begin(); it != str.end(); it++)
        cout << *it;
    return 0;
}