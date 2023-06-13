#include <iostream>
using namespace std;

int displacement(int v, int t)
{
    int ans = v * t * 2;
    // (ans < 0)? ans *= -1 : ans;
    return ans;
}

int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        cout << displacement(v, t) << '\n';
    }
    return 0;
}