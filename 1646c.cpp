
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
////vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,      43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

set<int> st;
int nn;
int dp[100];
int find(vector<int> &v, int i, int rem)

{
    if (i >= nn)
    {
        return rem == 0 ? 0 : 1000;
        /* code */
    }
    if (rem == 0)
    {
        return 0;
    }
    // if (dp[i] != -1)
    //     return dp[i];
    /* code */

    if (v[i] <= rem)
    {
        // cout << i << " " << rem <<" "<<nn<< endl;
        return dp[i] = min(find(v, i + 1, rem - v[i]) + 1, find(v, i + 1, rem)); /* code */
    }
    else
    {
        return dp[i] = 1000;
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int j = 1;
    vector<int> fill;

    j = 1;
    for (int i = 1; i <= 16; ++i)
    {
        j *= i;
        st.insert(j);
    }
    for (auto &it : st)
    {

        fill.push_back(it);
    }
    int Test_Cases;
    cin >> Test_Cases;
    debug(fill);
    while (Test_Cases--)
    {

        int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        // int j = 1;

        nn = upper_bound(fill.begin(), fill.end(), n + 1) - fill.begin();
        // debug(fill);
        ans = find(fill, 0, n);
        if (ans >= 1000)
        {
            cout << "-1"
                 << "\n";
            // return;
            continue;

            /* code */
        }
        cout << ans << endl;
    }
    return 0;
}