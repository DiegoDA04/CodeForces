#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if(a > b)
    {
        cout << b << " " << (a - b) / 2;
    }else if( a == b)
    {
        cout << a << " " << 0;
    }else{
        cout << a << " " << (b - a) / 2 ;
    }
}

int main()
{
    
    solve();

    return 0;
}