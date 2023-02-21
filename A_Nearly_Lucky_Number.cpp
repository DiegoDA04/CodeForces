#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main()
{
    string s;
    lli ans = 0;
    cin >> s;


    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '7' || s[i] == '4')
        {
            ans++;
        }
    }
    if(ans == 4 || ans == 7)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}