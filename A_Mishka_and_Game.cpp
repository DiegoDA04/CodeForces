#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;


void solve()
{
    int n, a ,b;
    int ct = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if(a > b)
        {
            ct++;
        }
        if(a < b){
            ct--;
        }
    }
    if(ct > 0)
    {
        cout << "Mishka";
    }else if(ct == 0)
    {
        cout << "Friendship is magic!^^";
    }else{
        cout << "Chris";
    }
}

int main()
{
    
    solve();
                                         
    return 0;
}   