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
   int n;
   cin >> n;
   if(n % 2 == 0)
   {
        cout << n - 4 << " 4";
   }else
   {
        cout << n - 9 << " 9";
   }
}

int main()
{

    solve();
    
    return 0;
}