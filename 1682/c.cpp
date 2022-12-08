
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
    vector<int> v(n);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int> v1, v2;

    if (n == 3)
    {
        if (v[0]== v[2])
        {
            cout << "1"
                 << "\n";
            return;
            /* code */
        }
        else
        {
            cout << "2"
                 << "\n";
            return;
            /* code */
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if ((i % 2) == 0)
        {
            v1.push_back(v[i]);
            /* code */
        }
        else
        {
            v2.push_back(v[i]);
        }
    }
    int ans1 = 1;
    int ans2 = 1;
     for (int i = 1; i < v1.size(); ++i)
    {
        if (v1[i - 1] < v1[i])
        {
            ans1++;
        }
    }
    int ii = v1.size() - 1;
    if (ii >= 0)
    {
        for (int j = v2.size() - 1; j >= 0; --j)
        {

            if (v1[ii] < v2[j])
            {
                ans1++;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 1; i < v2.size(); ++i)
    {
        if (v2[i - 1] < v2[i])
        {
            ans2++;
        }
    }
    int ii = v2.size() - 1;
    if (ii >= 0)
    {
        for (int j = v1.size() - 1; j >= 0; --j)
        {

            if (v2[ii] < v1[j])
            {
                ans2++;
            }
            else
            {
                break;
            }
        }
    }

     cout << min(ans1, ans2) << "\n";

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