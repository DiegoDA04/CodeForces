#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;

int dp(ll n)
{
    if(n > 100)
    {
        return dp(n % 100);
    }else if(n > 50)
    {
        return dp(n % 50);
    }else if(n > 20)
    {
        return dp(n % 20);
    }else if(n > 10)
    {
        return dp(n % 10);
    }else if(n > 5)
    {
        return dp(n % 5);
    }else{
        return n;
    }
    
}

void solve()
{
    ll n;
    ll ct = 0;
    cin >> n;

    while (1)
    {
        if(n >= 100)
        {
            ct += n / 100;
            n = n % 100;
        }else if(n >= 20)
        {
            ct += n / 20;
            n = n % 20;
            
        }else if(n >= 10)
        {
            ct += n / 10;
            n = n % 10;
            
        }else if(n >= 5)
        {
            ct += n / 5;
            n = n % 5;
            
        }else{
            ct += n;
            break;    
        }
    }
    cout << ct;
}

int main()
{
    solve();

    return 0;
}   