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
    string s, aux = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        aux += s[i];
        
        if(aux == "--")
        {
            cout << 2;
            aux = "";
        }else if (aux == "-.")
        {
            cout << 1;
            aux = "";
        }else if(aux == ".")
        {
            cout << 0;
            aux = "";
        }
       
    }
    
}

int main()
{
    
    solve();
                                         
    return 0;
}