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
    mpci mp;
    cin >> n;
    string s;
    cin >> s;

    string s2(s.begin(),unique(s.begin(),s.end()));

    for (int i = 0; i < s2.length(); i++)
    {
        mp[s2[i] - 'A']++;
    }
    for(auto i : mp)
    {
        if(i.second > 1 )
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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