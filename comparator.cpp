
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // #define count_1 __builtin_popcountll
// // long long power(long long a, long long b, long long md)
// // {
// //     return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
// // }
// // #define db1(x) cout << "\t\n" \
// //                     << #x << "\t" << x << "\t\n"
// // #define db2(x, y) cout << "\t\n"                     \
// //                        << #x << "\t" << x << " <-> " \
// //                        << #y << "\t" << y << "\t\n"
// // #define dbarr(arr)           \
// //     cout << #arr << " ~ [ "; \
// //     for (auto n : arr)       \
// //         cout << n << " ";    \
// //     cout << "]" << endl;
// // #define dbarrp(arr)                                \
// //     cout << #arr << " ~ [ ";                       \
// //     for (auto n : arr)                             \
// //         cout << n.first << "-" << n.second << " "; \
// //     cout << "]" << endl;
// // #define endl "\n"
// // #define all(v) v.begin(), v.end()
// // #define valueupto(x, y) fixed << setprecision(x) << y
// // //#define PI 3.141592653589793238462
// // typedef long long ll;
// // #ifndef ONLINE_JUDGE
// // #define debug(x)                          \
// //     cerr << __LINE__ << " " << #x << " "; \
// //     _print(x);                            \
// //     cerr << endl;
// // #else
// // #define debug(x)
// // #endif

// // void _print(int t)
// // {
// //     cerr << t;
// // }
// // void _print(string t) { cerr << t; }
// // void _print(char t) { cerr << t; }
// // void _print(double t) { cerr << t; }

// // template <class T>
// // void _print(vector<T> v)
// // {
// //     cerr << "-> [ ";
// //     for (T i : v)
// //     {
// //         _print(i);
// //         cerr << " ";
// //     }
// //     cerr << "]";
// // }
// // // const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
// // // const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// // ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

// // struct cmp
// // {
// //     bool operator()(int a, int b)
// //     {
// //         return a < b;
// //     }
// // };

// // void solve()
// // {
// //     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
// //     cin >> n;
// //     vector<int> v(n);

// //     for (int i = 0, x; i < n; ++i)
// //     {
// //         cin >> v[i];
// //     }

// //     sort(v.begin(), v.end(), cmp());
// //     debug(v);
// // }
// // signed main()
// // {

// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     cout.tie(nullptr);
// //     // int Test_Cases;
// //     // cin >> Test_Cases;
// //     // while (Test_Cases--)
// //     //     solve();
// //     char s = 's';
// //     char p = 'p';
// //     s = s ^ p;
// //     p = s ^ p;
// //     s = s ^ p;
// //     cout << (s + p);
// //     return 0;
// // }

// #include "iostream"

// using namespace std;

// void add(int a,int b)
// {
//     cout << a + b;
// }
// // int main()
// // {
// //     cout << "C++ Compiler Version : " << __cplusplus;
// //     cout << "\nDate : " << __DATE__;
// //     cout << "\nTime : " << __TIME__;
// //     cout << "\nFile Name : " << __FILE__;
// //     cout << "\nLine Number : " << __LINE__;
// //     cout << "\nSTDC : " << __STDC__;
// //     cout << "\nSTDC_HOSTED : " << __STDC_HOSTED__;
// //     return 0;
// // }

#include <iostream>

// Stringizing operator '#' before str converts the
// passed argument to stringer() into string type
#define stringer(str) #str

// Token-pasting operator '##' in b/w 'a' & 'b'
// merges them as one variable 'ab'
#define mix(a, b) b##a

using namespace std;

int main()
{
    // # operator converts the scaler_topics argument to a string type in output
    // cout << stringer(scaler_topics) << endl;

    int ba = 25;
    // ## operator concatenated a and b
    cout << mix(a, b);
    return 0;
}
