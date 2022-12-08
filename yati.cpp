
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

// vector<long long> solution(vector<vector<long long>> chunks)
// {
//     int mn = chunks[0][0], mx = chunks[0][1];

//     vector<long long> ans;
//     ans.push_back(mx - mn + 1);
//     int n = chunks.size();

//     for (int i = 1; i < n; ++i)
//     {
//         mn = min(mn, chunks[i][0]);
//         mx = max(mx, chunks[i][1]);
//         ans.push_back(mx - mn + 1);
//     }
//     return ans;
// }

// void solve()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     vector<vector<long long>> chunks;
//     chunks.push_back({1, 9});
//     chunks.push_back({1, 3});
//     chunks.push_back({8, 15});
//     chunks.push_back({6, 9});
//     chunks.push_back({2, 5});
//     vector<long long> v;

//    v = solution(chunks);
//     for (auto &it : v)
//     {
//         cout << it << " ";
//     }
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

string solution(vector<string> commands)
{

    string ans = "/";
    for (auto &it : commands)
    {
        if (it[3] == '.' and it[4] == '.')
        {
            int n = ans.size();
            n--;
            while (ans[n] != '/')
            {
                ans.pop_back();
                n--;
                /* code */
            }
            continue;
            /* code */
        }
        if (it[3] == '/' and it.size() == 4)
        {
            ans = "/";

            continue;
            /* code */
        }
        if (it[3] == '.' and it.size() == 4)
        {
            // ans = "/";

            continue;
            /* code */
        }
        int n = it.size();
        ans += it.substr(3, n - 3);
        ans.push_back('/');
    }

    return ans;
}

void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<string> chunks;
    chunks.push_back("cd satya");
    chunks.push_back("cd ..");
    chunks.push_back("cd satya");
    // chunks.push_back("cd ..");

    string vv = solution(chunks);
    cout << vv;
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