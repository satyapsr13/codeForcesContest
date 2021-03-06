
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

vector<vector<int>> tree(100009);
int deg[100009] = {0};

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
int invert_tt(int a)
{
    if (a == 2)
        return 3;
    else
        return 2;
}
bool vis[100008] = {0};

map<pair<int, int>, int> mp1;
// map<int, pair<int, int>> mp2;
vector<int> ans(100008, 0);
int tt = 2;
void dfs(int n, int parent)
{
    vis[n] = 1;
    for (auto &it : tree[n])
    {
        tt = invert_tt(tt);
        // mp1[{parent, it}] = tt;
        // mp1[{it, parent}] = tt;
        ans[mp1[{parent, it}]] = tt;
        if (!vis[it])
            dfs(it, n);
    }
}

void solve()
{
    int n, k,  l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;

    for (int i = 0; i < n - 1; ++i)
    {

        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
        deg[b]++;
        // mp2[i] = {a, b};
        mp1[{a, b}] = i;
        mp1[{b, a}] = i;

        deg[a]++;
        if (deg[a] > 2 || deg[b] > 2)
        {
            // db1(a);
            // db1(b);
            cout << "-1"
                 << "\n";
            return;
        }
        if (deg[a] == 1)
            l = a;
        if (deg[b] == 1)
            l = b;
    }

    for (int i = 1; i < n; ++i)
    {

    dfs(i, i);
    }


    for (int i = 0; i < n - 1; ++i)
    {
        // cout << mp1[{mp2[i].first, mp2[i].second}];
        cout << ans[i];
        cout << " ";
    }
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        mp1.clear();
        // mp2.clear();
        memset(deg, 0, sizeof(deg));
        solve();
    }
    return 0;
}