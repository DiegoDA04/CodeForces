#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    sort(arr, arr + n);

    int ct = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(abs(arr[i] - arr[i + 1]) <= 1)
        {
            ct++;
        }
    }
    
    if(n - ct == 1)
    {
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}