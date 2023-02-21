#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, s2;
    cin >> s;

    sort(s.begin(),s.end());
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != '+')
        {
            s2 +=s[i];
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if((i + 1) % 2 == 0)
        {
            s2.insert(i,"+");
        }
    }
    
    
    cout << s2;

    return 0;
}