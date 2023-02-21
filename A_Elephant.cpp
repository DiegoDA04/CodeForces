#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin >> x;

    int ans = 0;

    if(x % 5 == 0)
    {
        cout << x/5;
    }else{
        cout << (x / 5) + 1;
    }
   
    
    
    return 0;
}