#include <bits/stdc++.h>
using namespace std;

string decode(string s)
{
    string msg = "";
    for (char c: s)
    {
        msg += c - 7;
    }
    return msg;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (int(s.size()) == 0)
            break;
        cout << decode(s) << '\n';
    }
}