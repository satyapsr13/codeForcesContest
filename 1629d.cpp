
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
unordered_map<string, int> mp1;
unordered_map<string, int> mp2;
void solve()
{
    int n, k, ans = 0, l = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<string> v;

    for (int s = 0; s < n; ++s)
    {
        string ss;
        cin >> ss;
        v.push_back(ss);
        if (l)
        {
            continue;
        }

        if (ss.size() == 1)
        {
            l = 1;
        }
        if (ss.size() == 2)
        {

            if (ss[0] == ss[1])
            {

                l = 1;
            }
            mp1[ss] = 1;
            string p;
            p.push_back(ss[1]);
            p.push_back(ss[0]);

            if (mp1[p])
            {
                l = 1;
            }
            mp2[p] = 1;
        }
        if (ss.size() == 3)
        {
            if (ss[0] == ss[2])
            {
                l = 1;
                continue;
            }
            mp1[ss] = 1;
            string p;
            // ss[2] + ss[1] + ss[0];
            p.push_back(ss[2]);
            p.push_back(ss[1]);
            p.push_back(ss[0]);
            if (mp1[p])
            {
                l = 1;
            }
            mp2[p] = 1;
        }
    }
    if (l)
    {
        cout << "YES"
             << "\n";
        return;
        /* code */
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        solve();
    return 0;
}

/*-----------------RECURSIVE CODE 👇  -------------------------*/
class Solution
{
    int n;
    //  for  dp[N][buy][k]
    int dp[100001][2][3];
    int find(vector<int> &v, int i, bool buy, int k)
    {
        if (n == 1 || i == n || k == 0)
            return 0;

        if (dp[i][buy][k] != -1)
            return dp[i][buy][k];
        if (buy)
        {
            return dp[i][buy][k] = max(find(v, i + 1, !buy, k) - v[i], find(v, i + 1, buy, k));
        }
        else
        {
            return dp[i][buy][k] = max(v[i] + find(v, i + 1, !buy, k - 1), find(v, i + 1, buy, k));
        }
    }

public:
    int maxProfit(vector<int> &prices)
    {

        n = prices.size();
        memset(dp, -1, sizeof(dp));
        return find(prices, 0, 1, 2);
    }
};
/*-----------------Top Down DP 👇 -------------------------*/
