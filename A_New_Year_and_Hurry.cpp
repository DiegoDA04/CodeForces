#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;

void solve()
{
    int n, k;
    int ct = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if((5 * i) + k <= 240)
        {
            ct++;
            k += 5*i;
        }
    }
    

    cout << ct;
}

int main()
{
    
    solve();

    return 0;
}   