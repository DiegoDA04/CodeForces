#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char letters[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            letters[s[i] - 'A']++;
        }
        if(s[i] >= 97 && s[i] <= 122 )
        {
            letters[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(letters[i] == 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    
    solve();

    return 0;
}