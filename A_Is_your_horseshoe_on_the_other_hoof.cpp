#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int a;
    mpii mp;
    for (int i = 0; i < 4; i++)
    {
        cin >> a; 
        mp[a]++;
    }   
    int ct = 0;

    for(auto i : mp) if(i.second > 0) ct++;

    cout << 4 - ct;
}

int main()
{

    solve();

    return 0;
}