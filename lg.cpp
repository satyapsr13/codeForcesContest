
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define count_1 __builtin_popcountll
long long power(long long a, long long b, long long md)
{
    return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
}
#define db1(x) cout << "\t\n" \
                    << #x << "\t" << x << "\t\n"
#define db2(x, y) cout << "\t\n"                     \
                       << #x << "\t" << x << " <-> " \
                       << #y << "\t" << y << "\t\n"
#define dbarr(arr)           \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << " ";    \
    cout << "]" << endl;
#define dbarrp(arr)                                \
    cout << #arr << " ~ [ ";                       \
    for (auto n : arr)                             \
        cout << n.first << "-" << n.second << " "; \
    cout << "]" << endl;
#define endl "\n"
#define all(v) v.begin(), v.end()
#define valueupto(x, y) fixed << setprecision(x) << y
//#define PI 3.141592653589793238462
typedef long long ll;
#ifndef ONLINE_JUDGE
#define debug(x)                          \
    cerr << __LINE__ << " " << #x << " "; \
    _print(x);                            \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T>
void _print(vector<T> v)
{
    cerr << "-> [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
// const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
// const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

unordered_map<string, int> nodeStart;
unordered_map<string, int> nodeDis;

int dfs(int i, int n, string preInd, unordered_map<string, bool> vis)
{
    if (i == n - 1)
    {
        // cout << preInd << " ->  " << nodeStart[preInd] << endl;
        return nodeStart[preInd];
    }
    int ans = INT_MAX;
    for (auto &it : nodeStart)
    {
        if ((it.first == preInd) or vis[it.first] == 1)
        {
            continue;
        }
        vis[it.first] = 1;
        string temp = preInd + " " + it.first;
        ans = min(ans, nodeDis[temp] + dfs(i + 1, n, it.first, vis));
        // vis[it.first] = 0;
    }
    // cout << i << " " << ans << endl;
    return ans;
}
void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    // unordered_map<string, int> nodeVal;
    unordered_map<string, bool> vis;
    string s;
    int val;
    string startNode;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        cin >> val;
        ans += val;
        // nodeVal[s] = val;
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        cin >> val;
        nodeStart[s] = val;
    }
    // cout << nodeStart.size();
    
    for (int i = 0; i < (n * (n - 1) / 2); ++i)
    {
        cin >> s;
        string p;
        cin >> p;
        cin >> val;

        nodeDis[s + " " + p] = val;
        nodeDis[p + " " + s] = val;
    }
    // cout<<ans+dfs(0,)
    for (auto &it : nodeStart)
    {
        // cout << it.first << " ";
        vis[it.first] = 1;
        mn = min(mn, dfs(0, n, it.first, vis)) + it.second;
        vis[it.first] = 0;
        // cout << mn << endl;
    }
    // cout << ans;cout <<"\n" ;
    // cout << "\n";

    cout << ans + mn;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}