
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
void solve()
{
    int n, k, ans = INT_MIN, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<int> v1(n + 2, 0);
    vector<int> v2(n + 2, 0);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        v1[x] = i;
    }

    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        v2[x] = i;
    }
    // vector<int> vv;
    map<int, int> mp2;
    map<int, int> mp1;
    { // for clock wise
        for (int i = 1; i <= n; ++i)
        {
            // vv.push_back(min(abs(v1[i] - v2[i]), n - (min(abs(v1[i] - v2[i])))));
            // int dis = min(abs(v1[i] - v2[i]), n - (abs(v1[i] - v2[i])));
            // db2(abs(v1[i] - v2[i]), n - (abs(v1[i] - v2[i])));
            // mp[dis]++;
            int dis;
            if (v1[i] < v2[i])
            {
                dis = n - abs(v1[i] - v2[i]);
            }
            else
            {
                dis = abs(v1[i] - v2[i]);
            }
            // db2(i, dis);
            mp1[dis]++;
        }
    }
    { // for anti-clock wise
        for (int i = 1; i <= n; ++i)
        {
            int dis;
            if (v1[i] <= v2[i])
            {
                dis = abs(v1[i] - v2[i]);
            }
            else
            {
                dis = n - abs(v1[i] - v2[i]);
            }
            mp2[dis]++;
        }
    }
    for (auto &it : mp1)
    {
        ans = max(ans, it.second);
        // break;
    }

    for (auto &it : mp2)
    {
        // cout << it.first << " ";
        // cout << it.second << "\n ";
        ans = max(ans, it.second);
        // ans = it.second;
        // break;
    }
    cout << ans << "\n";
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}