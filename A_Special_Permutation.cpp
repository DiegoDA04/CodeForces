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
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    
    for (int i = 1; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << "1\n";
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