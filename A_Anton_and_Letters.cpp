#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    string s;
    getline(cin,s);
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ')
        {
            a[s[i] - 'a']++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(a[i] > 0)
        {
            ans++;
        }
    }
    cout << ans;
}

int main()
{
    
    solve();

    return 0;
}