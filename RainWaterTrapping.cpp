#include <bits/stdc++.h>
using namespace std;

// O(n^2) --> Time Complexity
// void trappingRainWater(int *arr, int n)
// {
//     int lmax, rmax, res = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         //Left Side Maximum
//         lmax = arr[0];
//         for (int j = 0; j < i; j++)
//         {
//             lmax = max(lmax, arr[j]);
//         }

//         //Right Side Maximum
//         rmax = arr[0];
//         for (int j = i + 1; j < n; j++)
//         {
//             rmax = max(rmax, arr[j]);
//         }

//         res += (min(lmax, rmax) - arr[i]);
//     }
//     cout << res << endl;
// }

//O(n) --> Time Complexity
void trappingRainWater(int *arr, int n)
{
    int lmax[n], rmax[n], res = 0;
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << lmax[i] << " ";
    }
    cout << endl;
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[n - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << rmax[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    cout << res << endl;
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    trappingRainWater(arr, n);
    return 0;
}