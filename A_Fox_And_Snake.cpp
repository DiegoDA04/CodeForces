#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int aux = 1;
    string s (m,'#'), l (m,'.'), r (m,'.');

    l[0] = '#';
    r[m - 1] = '#';
    int j = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            cout << s;   
        }else
        {
            if(j % 2 == 0)
            {
                cout << r;
            }else{
                cout << l;
            }          
            j++;
        }
        cout << "\n";
    }

}

int main()
{

    solve();   

    return 0;
}   