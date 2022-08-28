#include <string>
#include <iostream>
using namespace std;
typedef signed long long ll;

int main()
{
    string s;
    while (getline(cin, s))
    {
        ll start = 0;
        for (ll i = 0; i < (ll)s.size(); i++)
            if (s[i] == ' ' || i == (ll)s.size() - 1)
            {
                if (i == (ll)s.size() - 1)
                    for (ll j = i; j >= start; j--)
                        cout << s[j];
                else
                {
                    for (ll j = i - 1; j >= start; j--)
                        cout << s[j];
                    cout << " ";
                }
                start = i + 1;
            }
        cout << "\n";
    }
    return 0;
}