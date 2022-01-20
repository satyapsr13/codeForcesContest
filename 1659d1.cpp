
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
#define db2(x, y) cout << "\t\n"                   \
                       << #x << "\t" << x << " | " \
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
class DSU1
{
    vector<int> parent, size;

public:
    DSU1(int n)
    {
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; ++i)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    void Union(int u, int v)
    {
        u = findParent(u);
        v = findParent(v);
        if (u == v)
            return;
        if (size[u] > size[v])
        {
            parent[v] = u;
            size[u] += size[v];
        }
        else if (size[v] > size[u])
        {
            parent[u] = parent[v];
            size[u]++;
        }
    }

    int findParent(int node)
    {
        if (node == parent[node])
            return node;
        else
            return parent[node] = findParent(parent[node]);
    }
};

class DSU
{
private:
public:
    vector<int> parent, size;

    DSU(int n)
    {

        // for (int i = 1; i <= n; ++i)
        // {
        //     parent.push_back(i);
        //     size.push_back(1);
        // }
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; ++i)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    void Union(int u, int v)
    {
        int pu = findParent(u);
        int pv = findParent(v);
        if (pu == pv)
        {
            return;
        }
        if (size[pu] < size[pv])
        {

            parent[pu] = pv;

            size[pv] += size[pu];
        }
        else

        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    };
    int findParent(int node)
    {
        if (parent[node] == node)
        {
            return node;
            /* code */
        }
        return parent[node] = findParent(parent[node]);
    }
};

// vector<vector<int>> tree1(1005);
// vector<vector<int>> tree2(1005);
void solve()
{
    int n, k, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;

    int a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> ans;
    DSU d1(n + 1);
    DSU d2(n + 1);
    for (int i = 0; i < a; ++i)
    {

        int x, y;
        cin >> x >> y;
        d1.Union(x, y);
        // db2(x, d1.findParent(x));
        // db2(y, d1.findParent(y));
    }

    for (int i = 0; i < b; ++i)
    {
        int x, y;
        cin >> x >> y;
        d2.Union(x, y);
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            // cout << i;
            if (d1.findParent(i) != d1.findParent(j))
            {

                if (d2.findParent(i) != d2.findParent(j))
                {
                    d1.Union(i, j);

                    d2.Union(i, j);
                    ans.push_back({i, j});
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (auto &it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
