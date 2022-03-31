
#include <bits/stdc++.h>

#define db(x) cout << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[1000001];
int count = 0;
int find(string s, int i, int ans)
{
    if (i == 16 and ans == 5)
    {

        return 1;
    }

    if (i == 16)
    {

        return 0;
    }
    int ans1 = 0;
    s.push_back('0');
    ans1 += find(s, i + 1, ans + 1);
    s.pop_back();
    s.push_back('1');
    ans1 += find(s, i + 1, ans);
    s.pop_back();
    return ans1;
}
signed main()
{

    string s;
    // count = 0;
    // v.push_back(0);
    cout << find(s, 0, 0);
    return 0;
}