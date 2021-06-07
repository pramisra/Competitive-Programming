#include <bits/stdc++.h>
using namespace std;
#define MOD 10000000007

/*This is Euclidean Algorithm for Finding GCD(Greatest Common Divisor) Time Complexity --> O(log(min(a,b)))*/
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    long long int a, b;
    cout << gcd(a, b) << endl;
    return 0;
}