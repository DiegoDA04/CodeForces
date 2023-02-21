#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int x1,y1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if(a == 1)
            {
                x1 = j + 1;
                y1 = i + 1;
            }
        }   
    }
    int dx1 = abs(3 - x1);
    int dy2 = abs(3 - y1);

    cout << dx1 + dy2;

    return 0;
}