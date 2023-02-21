#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ct = 1;
    vi v;

    while (v.size() < 1000)
    {
        if(ct % 3 != 0 && ct % 10 != 3)
        {
            v.push_back(ct);
        }
        ct++;
    }
    
    while (t--)
    {
        int n;
        cin >> n;

        cout << v[n - 1] << "\n";
    }
                                         
    return 0;
}