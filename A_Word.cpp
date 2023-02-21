#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            l++;
        }else{
            u++;
        }
    }
    if(l > u)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }else if (l == u)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }else{
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s;
    }
    
    return 0;
}