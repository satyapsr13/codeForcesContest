
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
    int n, k, ans = INT_MAX, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;

    int l = (1 << 9);
    int r = (1 << 10);
    string s;
    cin >> s;
    int score1 = 0, score2 = 0;
    for (int i = l; i < r; ++i)
    {
        score1 = 0, score2 = 0;
        for (int j = 0; j < 10; ++j)
        {
            if (j & 1)
            {

                score2 += (s[j] == '1');

                if (s[j] == '?')
                {
                    if ((i & (1 << j)))
                    {
                        score2++;
                    }
                }
            }
            else
            {
                score1 += (s[j] == '1');
                if (s[j] == '?')
                {

                    if (i & (1 << j))
                    {
                        score1++;
                    }
                }
            }
            // db2(score1, score2);
            // db1(i);

            if (score2 > score1)
            {
                if (score2 - score1 > ((10 - j - (!(j & 1))) / 2))
                {
                    // cout << j + 1 << "\n";
                    // return;
                    ans = min(ans, j + 1);
                }
            }
            else
            {

                if (score1 - score2 > ((10 - j + 1) / 2))
                {
                    ans = min(ans, j + 1);
                }
            }
        }
        // cout << i << " " << score1 << " " << score2 << endl;
    }
    cout << ((ans == INT_MAX) ? 10 : ans) << "\n";
    return;
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