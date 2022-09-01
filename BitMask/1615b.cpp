
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define count_1 __builtin_popcountll
// long long power(long long a, long long b, long long md)
// {
//     return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
// }
// #define db1(x) cout << "\t\n" \
//                     << #x << "\t" << x << "\t\n"
// #define db2(x, y) cout << "\t\n"                     \
//                        << #x << "\t" << x << " <-> " \
//                        << #y << "\t" << y << "\t\n"
// #define dbarr(arr)           \
//     cout << #arr << " ~ [ "; \
//     for (auto n : arr)       \
//         cout << n << " ";    \
//     cout << "]" << endl;
// #define dbarrp(arr)                                \
//     cout << #arr << " ~ [ ";                       \
//     for (auto n : arr)                             \
//         cout << n.first << "-" << n.second << " "; \
//     cout << "]" << endl;
// #define endl "\n"
// #define all(v) v.begin(), v.end()
// #define valueupto(x, y) fixed << setprecision(x) << y
// //#define PI 3.141592653589793238462
// typedef long long ll;
// #ifndef ONLINE_JUDGE
// #define debug(x)                          \
//     cerr << __LINE__ << " " << #x << " "; \
//     _print(x);                            \
//     cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t)
// {
//     cerr << t;
// }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(double t) { cerr << t; }

// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "-> [ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// // const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
// // const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
// void solve()
// {
//     int n, k, ans = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     int l, r;
//     cin >> l >> r;

//     for (int i = 20; i >= 0; --i)
//     {
//         if (((1 << i) & r))
//         {
//             mn = i;
//             break;
//             /* code */
//         }
//     }
//     for (int i = mn; i >= 0; --i)
//     {
//         count = 0;
//         for (int j = l; j <= r; ++j)
//         {
//             if (((1 << i) & j))
//             {
//                 count++;
//             }
//         }
//         mx = max(count, mx);
//     }
//     cout << r - l + 1 - mx;
//     cout << "\n";
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//         solve();
//     return 0;
// }

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
int returnLastbit(int r)
{

    for (int i = 20; i >= 0; --i)
    {
        if (((1 << i) & r))
        {
            return i;
            // break;
        }
    }
    return 0;
}
int odd(int a, int b)
{
    if ((a & 1) && (b & 1))
    {
        return ((b - a) / 2) + 1;
        /* code */
    }

    if (!(a & 1) && !(b & 1))
    {
        return ((b - a) / 2);
        /* code */
    }

    return ((b - a) / 2) + 1;
}
void solve()
{
    int n, k, ans = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int l, r;
    cin >> l >> r;
    int a, b;
    a = returnLastbit(l);
    b = returnLastbit(r);

    if (a == b)
    {
        cout << "0"
             << "\n";
        return;
    }

    ans = (1 << (a + 1)) - l;
    for (int i = a; i <= b; ++i)
    {
        
    }
    // else
    // {
    //     // ans = max({r - (1 << b) + 1, (a + 1 == b ? ((1 << b) - a) : ((1 << b) - (1 << (b - 1))))});
    //     int x = r - (1 << b) + 1;
    //     int y = (1 << (b)) - l;
    //     int z = (1 << b) - (1 << (b - 1));
    //     // cout <<"\n" ;
    //     // cout <<"\n" ;
    //     // cout <<"\n" ;

    //     // cout << x << " " << y << " " << z << " " << endl;
    //     ans = max({x,
    //                (a + 1 == b ? y : z)});
    // }
    // // cout <<  odd(l, r);
    // cout
    //     << min(r - l + 1 - ans, r - l + 1 - odd(l, r));

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