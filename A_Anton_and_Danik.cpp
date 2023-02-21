#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ct = 0;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            ct++;
        }else{
            ct--;
        }
    }
    if(ct > 0)
    {
        cout << "Anton";
    }else if(ct == 0)
    {
        cout << "Friendship";
    }else{
        cout << "Danik";
    }

    return 0;
}