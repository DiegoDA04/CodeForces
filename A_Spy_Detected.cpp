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
    int x[n];
    mpii mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        mp[x[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(mp[x[i]] == 1)
        {
            cout << i + 1 << "\n";
        }
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