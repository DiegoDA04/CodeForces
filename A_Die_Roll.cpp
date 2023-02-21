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
    int a, b;
    cin >> a >> b;
    int dif = 6 - max(a,b) + 1;
    if(dif == 6)
    {
        cout << 1 << "/" << 1;
    }else if(dif == 5)
    {
        cout << 5 << "/" << 6;
    }else if(dif == 4)
    {
        cout << 2 << "/" << 3;
    }else if(dif == 3)
    {
        cout << 1 << "/" << 2;
    }else if(dif == 2)
    {
        cout << 1 << "/" << 3;
    }else
    {
        cout << 1 << "/" << 6;
    }
    
}

int main()
{
    
    solve();
                                     
    return 0;
}