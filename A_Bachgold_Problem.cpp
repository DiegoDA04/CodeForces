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
   int n, limit, more = 0;
   cin >> n;
   if(n % 2 == 0)
   {
        limit = n/2;
   }else
   {
        limit = n/2 - 1;
        more = 1;
   }
   cout << n/2 << "\n";
   for (int i = 0; i < limit; i++)
   {
        cout << 2 << " ";
   }
   if(more == 1)
   {
        cout << n - 2*limit;
   }
}

int main()
{

    solve();
                                        
    return 0;
}