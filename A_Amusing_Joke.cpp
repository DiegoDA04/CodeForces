#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string sf = s1 + s2;

    sort(sf.begin(),sf.end());
    sort(s3.begin(),s3.end());

    if(sf == s3)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main()
{
    
    solve();

    return 0;
}   