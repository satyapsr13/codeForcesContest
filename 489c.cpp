
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
bool findMin(int n, int k, vector<int> v, bool isFirst)
{
    if (n == 0)
    {
        // return k == 0;
        if (k == 0)
        {
            int n = v.size();

            unordered_map<int, int> mp;
            for (auto &it : v)
            {
                // cout << it<<" ";
                mp[it]++;
            }

            for (int i = 0; i < mp[1]; ++i)
            {
                cout << "1";
            }
            for (int i = 0; i < mp[0]; ++i)
            {
                cout << "0";
            }

            for (int i = 2; i < 10; ++i)
            {

                for (int j = 0; j < mp[i]; ++j)
                {
                    cout << i;
                }
            }
            cout << " ";
            for (int i = 9; i >= 0; --i)
            {

                for (int j = 0; j < mp[i]; ++j)
                {
                    cout << i;
                }
            }

            return true; /* code */
        }
        return false;
    }

    for (int i = (isFirst ? 1 : 0); i <= 9; ++i)
    {
        v.push_back(i);
        if (findMin(n - 1, k - i, v, 0))
        {
            return true;
        }

        v.pop_back();
    }
    return false;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

void solve()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;

    multiset<pair<int, int>> mst;
    mst.insert({1, 2});
    mst.insert({11, 20});
    mst.insert({1, 2});
    // mst.erase(1);
    for (auto &it : mst)
    {
        cout << it.first << " ";
        cout << it.second << " ";
        cout << "\n";
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