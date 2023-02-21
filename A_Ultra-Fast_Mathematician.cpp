#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i])
        {
            cout << 1;
        }else{
            cout << 0;
        }
    }
    
}

int main()
{

    solve();

    return 0;
}