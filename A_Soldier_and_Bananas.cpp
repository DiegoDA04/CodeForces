#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll k, n, w;
    cin >> k >> n >> w;

    int ans = ((w * (w + 1))/2)*k;

    if(n > ans)
    {
        cout << 0;
    }else{
        cout << ans - n;
    }

    return 0;
}