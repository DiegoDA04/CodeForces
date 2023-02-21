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
    int l[n], v[n];

    int ct = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> v[i];
        for (int j = 0; j < i; j++)
        {
            if(l[i] == v[j])
            {
                ct++;
            }
            if(v[i] == l[j])
            {
                ct++;
            }
        }
        
    }
    
    cout << ct;
    
}

int main()
{
    
    solve();

    return 0;
}   