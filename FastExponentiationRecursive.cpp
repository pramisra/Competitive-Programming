#include <bits/stdc++.h>
using namespace std;
#define MOD 10000000007
#define ll long long int

ll calculatePower(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        return calculatePower((a * a) % MOD, b >> 1) % MOD;
    }
    else
    {
        return (a * calculatePower((a * a) % MOD, b >> 1) % MOD);
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << calculatePower(a, b) << endl;
    return 0;
}