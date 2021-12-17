
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
string binary(int n)
{
    int d = log2(n) + 1;
    string s;
    for (int i = d - 1; i >= 0; --i)
    {
        int tt = pow(2, i);
        (n & tt) ? s.push_back('1') : s.push_back('0');
    }
    return s;
}
bool checksubarray(string s, string t)
{
    int n = s.size();
    int m = t.size();
    for (int j = 0; j < n; ++j)

    {
        for (int i = 0; i < m; ++i)
        {
            if (s[i + j] != t[i])
            {
                break;
                /* code */
            }
            if (i == m - 1)
            {
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;
    if (!(k & 1 ))
    {
        cout << "NO" << endl;
        return; 
    }

    int t1 = log2(n) + 1;
    int t2 = log2(k) + 1;
    // if (t1 > t2)
    // {
    //     cout << "NO"
    //          << "\n";
    //     return;
    // }
    // if (t1 == t2)
    // {
    //     if (n == k)
    //     {
    //         cout << "YES"
    //              << "\n";
    //         return;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    string t11 = binary(n);
    string t22 = binary(k);

    // reverse(t11.begin(), t11.end());

    int l1;
    for (int i = t11.size() - 1; i >= 0; --i)
    {
        if (t11[i] == '1')
        {
            l1 = i;
            break;
        }
    }
    string ss;
    cout << t22;cout <<"\n" ;
    

    for (int i = 0; i < l1 + 1; ++i)
    {
        ss.push_back(t11[i]);
    }
    if (checksubarray(t22, ss))
    {
        cout << "YES"
             << "\n";
        return;
    }

    cout << ss;cout <<"\n" ;
    
    reverse(ss.begin(), ss.end());
    if (checksubarray(t22, ss))
    {
        cout << "YES"
             << "\n";
        return;
    }
    cout << "NO" << endl;
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