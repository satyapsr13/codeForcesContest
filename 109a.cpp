
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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    bool arr[1000001] = {0};
    arr[0] = 1;
    arr[4] = 1;
    arr[7] = 1;
    string myans;

    if (n < 4)
    {
        cout << "-1"
             << "\n";
        return;
        /* code */
    }
    else
    {
        if (n == 4)
        {
            cout << "4"
                 << "\n";
            return;
            /* code */
        }
        else
        {
            if (n < 7)
            {
                cout << "-1"
                     << "\n";
                return;
                /* code */
            }
            else
            {
                if (n == 7)
                {
                    cout << "7"
                         << "\n";
                    return;
                }
                else
                {

                    for (int i = 8; i <= n; ++i)
                    {
                        if (arr[i - 7] or arr[i - 4])
                        {
                            arr[i] = 1;
                        }
                    }
                }
            }
        }
    }

    for (int i = n; i > 0;)
    {
        if (arr[n - 7])
        {
            myans.push_back('7');
            i -= 7;
            if (n == 4 or n == 7)
            {
                /* code */
                if (n == 4)
                {
                    myans.push_back('4');

                    cout << ans << "\n";
                    return;

                    /* code */
                }
                if (n == 7)
                {
                    myans.push_back('7');

                    cout << ans << "\n";
                    return;

                    /* code */
                }
            }
            else
            {
                if (n < 7)
                {
                    cout << "-1"
                         << "\n";
                    return;
                }
            }

            continue;
            /* code */
        }
        else if (arr[n - 4])
        {
            myans.push_back('4');
            i -= 4;
            if (n == 4 or n == 7)
            {
                /* code */
                if (n == 4)
                {
                    myans.push_back('4');

                    cout << ans << "\n";
                    return;

                    /* code */
                }
                if (n == 7)
                {
                    myans.push_back('7');

                    cout << ans << "\n";
                    return;

                    /* code */
                }
            }
            else
            {
                if (n < 7)
                {
                    cout << "-1"
                         << "\n";
                    return;
                }
            }

            continue;
        }
        else
        {
            cout << "-1"
                 << "\n";
            return;
        }
    }
    cout << myans << "\n";
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