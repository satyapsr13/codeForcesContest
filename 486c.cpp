
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
// #define PI 3.141592653589793238462
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
int getMin(char a, char b)
{
    return min(abs(b - a), abs(26 - abs(b - a)));
}
void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;
    string s;
    if (k > n / 2)
    {
        k = n - k+1;
    }

    cin >> s;
    k--;
    int ans1 = 0, ans2 = 0;
    n = s.size();
    // int i = k;
    // while (i < (n / 2))
    // {
    //     ans1 += getMin(s[i], s[n - i - 1]);
    //     // cout << s[i];
    //     cout << i << " ";
    //     i++;
    // }
    // ans1 += i - k + 1;
    // i = k - 1;

    // while (i >= 0)
    // {
    //     ans1 += getMin(s[i], s[n - i - 1]);
    //     // cout << s[i];
    //     cout << i << " ";
    //     i--;

    //     /* code */
    // }
    // i = k;

    // while (i >= 0)
    // {
    //     ans2 += getMin(s[i], s[n - i - 1]);
    //     // cout << s[i];
    //     i--;
    // }
    // ans2 += k - i + 1;
    // i = k + 1;
    // while (i < n / 2)
    // {
    //     ans2 += getMin(s[i], s[n - i - 1]);
    //     cout << s[i];
    //     i++;
    // }
    // db2(ans1, ans2);
    // cout << min(ans1, ans2);
    int r = -1;
    int i = 0;

    while (i < n / 2)
    {
        if (s[i] != s[n - i - 1])
        {
            l = i;
            break;
        }
        i++;
    }

    i = n / 2 - 1;
    while (i >= 0)
    {

        if (s[i] != s[n - i - 1])
        {
            r = i;
            break;
        }
        i--;
    }
    // db2(l, r);
    if (r == -1)
    {
        cout << "0"
             << "\n";
        return;
        /* code */
    }
    if (l < k and r < k)
    {
        l = min(l, r);
        ans1 = k - l;
        while (k >= l)
        {
            ans1 += getMin(s[k], s[n - k - 1]);
            k--;
        }
        cout << ans1 << "\n";
        return;
    }
    else if (l > k and r > k)
    {
        r = max(l, r);
        ans1 = r - k;
        while (k <= r)
        {
            ans1 += getMin(s[k], s[n - k - 1]);
            k++;
        }
        cout << ans1 << "\n";
        return;
    }
    else
    {

        for (int i = l; i <= r; ++i)
        {
            ans1 += getMin(s[i], s[n - i - 1]);
        }
        // cout << ans1;
        // cout << "\n";

        if (abs(k - l) >= abs(k - r))
        {
            // cout<<k-
            ans1 += (2 * (r - k));
            ans1 += ((k - l));
            // cout << ans1;
            // cout << "\n";
        }
        else
        {
            ans1 += ((r - k));
            ans1 += (2 * (k - l));
        }
        cout << ans1 << "\n";
        return;
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