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
    int mn = 9999;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
    sort(a, a + n);

    for (int i = n - 1; i > 0; i--)
    {
        mn = min(mn,abs(a[i] - a[i - 1]));
    }
    
    cout << mn << "\n";
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