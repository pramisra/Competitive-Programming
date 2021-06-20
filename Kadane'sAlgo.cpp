#include <bits/stdc++.h>
using namespace std;

int kadanes_Algo(int *a, int n)
{
    int mx = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += a[i];
        if (curr > mx)
        {
            mx = curr;
        }
        else if (curr < 0)
        {
            curr = 0;
        }
    }
    return mx;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int res = kadanes_Algo(a, n);
    cout << res << endl;
    return 0;
}