#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define mpci map<char,int>
#define si set<int>
#define sll set<long long>
using namespace std;


void solve()
{
   string s;
   cin >> s;

   int n = s[0] - '0';
   
   cout << 10 * (n - 1) + (s.size() * (s.size() + 1)) /2<< "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
                                         
    return 0;
}