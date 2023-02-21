#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    
    int arr[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        arr[i] = s[i] - '0';
    }
    int ct = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if(arr[i] > 0)
        {
            ct++;
        }
    }
    cout << ct << "\n";

    for (int i = 0; i < s.length(); i++)
    {
        if(arr[i] > 0)
        {
            cout << arr[i] * ceil(pow(10, s.length() - 1 - i)) << " ";
        }
    }
    cout << "\n";
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