#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define mpci map<char,int>
#define si set<int>
#define sll set<long long>
using namespace std;


void solve()
{
   int n;
   cin >> n;
   ll arr[n];
   ll mx = -99;
   ll mn = 9999999999;
   for (int i = 0; i < n; i++)
   {
        cin >> arr[i];
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
   }
   cout << mx - mn << "\n";
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