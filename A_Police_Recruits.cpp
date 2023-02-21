#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int p = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
        {
            p += arr[i];
        }
        if(arr[i] == -1 && p == 0)
        {
            r++;
        }
        if(arr[i] == -1 && p > 0)
        {
            p--;
        }
    }
    cout << r;
}

int main()
{
    solve();

    return 0;
}   