 
#include <bits/stdc++.h>

#define db(x) cout  << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[1000001];
int n;
int find(vector<int> v, int i, int ans)
{
    if (n == i)
    {
        return ans;
    }
    db(ans);
    return max(find(v, i + 1, ans + v[i]), find(v, i + 1, v[i]));
}
signed main()
{
    // int n;
    cin >> n;
    vector<int> v ;
     
    memset(dp, 0, sizeof(dp));
    for (int i = 0, x; i < n; ++i)
    {
        // cin >> v[i];
        cin >> x;
        v.push_back(x);
    }
    cout << find(v, 0, 0);
    return 0;
}