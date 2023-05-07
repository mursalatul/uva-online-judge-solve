#include <iostream>
using namespace std;

int main()
{
    int t;
    for (cin >> t;t--;)
    {
        int n, m;
        cin >> n >> m;
        // 
        cout << (n / 3) * (m / 3) << '\n';
    }
    return 0;
}
