#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int n, min = 9999, max = -9999;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i])
        {
            max = a[i];
        }
    }

    int posI, posF;
    int minPosI = 9999, minPosF = -9999;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == min)
        {
            posF = i;
            if(posF >= minPosF)
            {
                minPosF = posF;
            }
        }
        if(a[i] == max)
        {
            posI = i;
            if(posI <= minPosI)
            {
                minPosI = posI;
            }
        }
    }
    minPosF++;
    minPosI++;
    if(minPosI > minPosF)
    {
        cout << minPosI - 1 + n - minPosF - 1;
    }else{
        cout << minPosI - 1 + n - minPosF;
    }
}

int main()
{

    solve();

    return 0;
}