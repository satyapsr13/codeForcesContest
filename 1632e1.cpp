
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
int vis[3001] = {0};
vector<vector<int>> tree(3001);
// int dis[3001] = {0};

// int findHeight(int n)
// {
//     vis[n] = 1;
//     int ans = 0;
//     bool flag = false;
//     for (auto &it : tree[n])
//     {
//         if (vis[it] == 0)
//         {
//             ans = max(ans, 1 + findHeight(it));
//             flag = true;
//         }
//     }
//     if (!flag)
//     {
//         return 0;
//         /* code */
//     }

//     // db2(n, ans);
//     return dis[n] = ans;
// }
void findHeight(priority_queue<int> &pq)
{

    queue<pair<int, int>> q;
    q.push({1, 0});
    vis[1] = 1;
    while (!q.empty())
    {
        int node = q.front().first;
        int dis = q.front().second;
        q.pop();
        pq.push(dis);
        vis[node] = 1;
        // db1(dis);
        for (auto &it : tree[node])
        {
            if (!vis[it])
            {
                q.push({it, dis + 1});
            }
        }
    }
}

void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    memset(vis, 0, sizeof(vis));
    tree.clear();
    tree.resize(3001);
    priority_queue<int> pq;

    for (int i = 0, x, y; i < n - 1; ++i)
    {
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    findHeight(pq);
    int height = pq.top();
    pq.pop();
    int height1 = pq.top();
    // db2(height1, height);

    for (int i = 0; i < n; ++i)
    {
        // db(dis[i]);
    }
    if (height1 == height)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << height << " ";
        }
        cout << "\n";
        return;
    }
    else
        for (int i = 0; i < n; ++i)
        {
            // cout << max(i + 1, height - 1) << " ";

            if (i + 1 < height)
            {
                cout << height - 1 << " ";
                /* code */
            }
            else
            {
                cout << height << " ";
            }
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
        solve();
    }
    return 0;
}