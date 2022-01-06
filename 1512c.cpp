
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define count_1 __builtin_popcountll
long long power(long long a, long long b, long long md)
{
    return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
}
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    // cin >> n  ;
    /*
    1. check for case 0-1 in alternate -1
    2. fill  0 ? or 1 ? decrease count of a and b
    3. fill ? ?

    */
    int counta = 0, countb = 0;
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    n = s.size();

    if (n == 1)
    {
        // db(000000000);
        if (s[0] != '?')
        {
            cout << s << "\n";
            return;
        }
        else if (a == b and b == 0)
        {
            cout << "-1"
                 << "\n";
            return;
        }
        else
        {
            if (a > 0)
            {
                cout << "0"
                     << "\n";
                return;
            }
            else
            {
                cout << "1"
                     << "\n";
                return;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == s[n - 1 - i])
        {
            continue;
        }
        if (s[i] != s[n - 1 - i] and s[i] != '?' and s[n - 1 - i] != '?')
        {
            cout << "-1"
                 << "\n";
            return;
        }
        {

            if (s[i] == '1' and s[n - 1 - i] == '?')
            {
                if (b > 0)
                {

                    s[n - 1 - i] = '1';
                    b--;
                    continue;
                }
                else
                {
                    cout << "-1"
                         << "\n";
                    return;
                }
            }
            if (s[i] == '?' and s[n - 1 - i] == '1')
            {
                if (b > 0)
                {

                    s[i] = '1';
                    b--;
                    continue;
                }
                else
                {
                    cout << "-1\n";
                    return;
                }
            }

            if (s[i] == '0' and s[n - 1 - i] == '?')
            {
                if (a > 0)
                {

                    s[n - 1 - i] = '0';
                    a--;
                    continue;
                }
                else
                {
                    cout << "-1"
                         << "\n";
                    return;
                }
            }

            if (s[i] == '?' and s[n - 1 - i] == '0')
            {

                if (a > 0)
                {
                    s[i] = '0';
                    a--;
                    continue;
                }
                else
                {
                    cout << "-1"
                         << "\n";
                    return;
                }
            }
        }
    }
    // debug(s);
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '?')
        {
            // debug(s);
            // db(i);
            if (a > 1)
            {
                s[i] = '0';
                s[n - 1 - i] = '0';
                a -= 2;
                continue;
            }
            else if (b > 1)
            {
                s[i] = '1';
                s[n - 1 - i] = '1';
                b -= 2;
                continue;
            }
            else
            {
                // db(a);
                cout << "-1"
                     << "\n";
                return;
            }
        }
    }
    cout << s;
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
        solve();
    return 0;
}