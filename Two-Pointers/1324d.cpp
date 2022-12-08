
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
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     vector<int> v1(n);

//     for (int i = 0, x; i < n; ++i)
//     {
//         cin >> v1[i];
//     }
//     vector<int> v2(n);

//     for (int i = 0, x; i < n; ++i)
//     {
//         cin >> v2[i];
//         v1[i] -= v2[i];
//     }

//     sort(v1.begin(), v1.end());
//     // debug(v1);
//     for (int i = 0; i < n - 1; ++i)
//     {
//         if (v1[i] > 0)
//         {
//             ans += (n - i - 1);
//         }
//         else
//         {
//             int ind = lower_bound(v1.begin(), v1.end(), (-1 * v1[i]) + 1) - v1.begin();
//             if (ind != n)
//                 ans += (n  - ind);
//             // db1(ind);
//         }
//         // db1(ans);
//     }
//     cout << ans;
//     cout << "\n";
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

struct cmp
{

    bool operator()(vector<int> a, vector<int> b)
    {
        //   return a.dead<b.dead;
        if (a[1] == b[1])
        {
            return a[2] > b[2];
        }
        return a[1] < b[1];
    }
};
class Solution
{
public:
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        vector<int> ans;
        // your code here

        ans.push_back(1);
        ans.push_back(1);
        vector<vector<int>> v(n, vector<int>(3, 0));

        for (int i = 0; i < n; ++i)
        {
            v[i][0] = arr[i].id;

            v[i][1] = arr[i].dead;
            v[i][2] = arr[i].profit;
        }
        sort(v.begin(), v.end(), cmp);
        for (auto &it : v)
        {
            cout << it[0] << " " << it[1] << " " << it[2] << endl;
        }

        return ans;
    }
};
int main(int argc, const char **argv)
{
    return 0;
}
