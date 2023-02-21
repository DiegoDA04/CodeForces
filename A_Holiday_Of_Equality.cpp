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
    int m = -9999;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m = max(m,arr[i]);
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(m - arr[i]);
    }
    
    cout << sum;
    
}

int main()
{
    solve();
                                      
    return 0;
}