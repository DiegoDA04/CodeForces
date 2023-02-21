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
    map<string,int> mp;

    string s;

    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    ll sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        sum += mp[s];
    }
    cout << sum;
}

int main()
{
    
    solve();

    return 0;
}   