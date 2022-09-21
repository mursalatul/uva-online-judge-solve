#include <iostream>
#include <vector>
using namespace std;
typedef signed long long int ll;

#define boost()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    boost();
    ll n = 1, m, c, seq = 1;
    while (1)
    {
        /*
        n = number of devices
        m = number of operations
        c = capacity of the fuse
        */
        cin >> n >> m >> c;
        if (!n) break;
        vector<ll> consumption; // consumption of electricity of n devices
        vector<bool> state;
        state.resize(n, false);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            consumption.push_back(x);
        }
        vector<ll> opr; // operations perform on each n devices
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            opr.push_back(x);
        }
        cout << "Sequence " << seq << "\n";
        seq++;
        ll total_a = 0;
        ll max_a = 0;
        bool fused = false;
        for (ll i = 0; i < m; i ++)
        {
            ll d = opr[i];
            --d;
            if (state[d] == false)
            {
                total_a += consumption[d];
                state[d] = true;
            }
            else if (state[d] == true)
            {
                total_a -= consumption[d];
                state[d] = false;
            }
            if (total_a > max_a) max_a = total_a;
            if (total_a > c)
            {
                fused = true;
                break;
            }
        }
        if (fused == true)
            cout << "Fuse was blown.\n\n";
        else
            cout << "Fuse was not blown.\nMaximal power consumption was " << max_a << " amperes.\n\n";
    }
    return 0;
}