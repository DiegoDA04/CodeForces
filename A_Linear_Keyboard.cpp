#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string s, w;
        int ans = 0;
        cin >> s >> w;

        int currentIndex = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == w[0]) currentIndex = i;
        }
        for (int i = 1; i < w.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j] == w[i]) {
                    ans += abs(currentIndex - j);
                    currentIndex = j;
                    break;
                }
            }
        }
        

        cout << ans << endl;   
    }
    

    return 0;
}