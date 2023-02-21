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
    int a[n * 2];
    map<int,int> mp;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < 2 * n; i++)
    {
        mp[a[i]]++;
        if(mp[a[i]] == 1)
        {
            cout << a[i] << " ";
        }
    }
    cout << "\n";
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