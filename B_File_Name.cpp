#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ct = 0;
    int ans = 0;
    vi v;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'x') ct++;
        else {
            if(ct > 0) v.push_back(ct);
            ct = 0;
        }
        
    }
    if(ct > 0) v.push_back(ct);
    
    for (int i = 0; i < v.size(); i++)
    {
       if(v[i] >= 3) ans += v[i] - 2;
    }
    
   cout << ans;

    return 0;
}