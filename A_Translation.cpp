#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main()
{
    string s, s2;
    cin >> s >> s2;

    reverse(s.begin(),s.end());
    
    if( s == s2)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}