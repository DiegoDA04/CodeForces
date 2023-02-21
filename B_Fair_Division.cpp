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
    int a[n];
    int ans = 0;
    int ones = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
        if(a[i] == 1)
        {
            ones++;
        }else
        {
            two++;
        }
    }
    if(n % 2 == 0)
    {
        if(ans % 2 == 0)
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else
    {
        if(ones % 2 == 0 && ones > 0)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
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