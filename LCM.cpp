#include <bits/stdc++.h>
using namespace std;
#define MOD 10000000007
#define ll long long int

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

/*Time Complexity --> O(log(max(a,b)))*/
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}
