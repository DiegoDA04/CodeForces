#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;

    while (1)
    {
        n++;
        s = to_string(n);

        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
        {
            cout << s;
            break;
        }
    }
    

    return 0;
}