
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
// bool isInside(int n, int x, int y)
// {
//     return x >= 0 and x < n and y >= 0 and y < n;
// }
// void solve()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     vector<vector<int>> v(n, vector<int>(n, 0));
//     l = 0;

//     int i = 0, j = 0;
//     while (l <= n)
//     {
//         while (isInside(n, i, j))
//         {
//             v[j][i] = ++ans;
//             i--;
//             j++;
//         }

//         l++;
//         i = l;
//         j = 0;
//     }
//     i = n-1, j = 1;
//     l = 1;
//     while (l < n)
//     {
//         while (isInside(n, i, j))
//         {
//             v[j][i] = ++ans;
//             i--;
//             j++;
//         }

//         l++;
//         i = n-1;
//         j = l;
//     }
//     for (auto &it : v)
//     {
//         // cout << it<<" ";
//         debug(it);
//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//         solve();
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {

        int N;
        cin >> N;

        int firstElement = 1, temp = N - 1, newElement;

        for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N; j++)
            {

                if (j = 0)
                {
                    cout << firstElement << " ";
                    newElement = firstElement;
                }
                else if ((i + j) <= (N - 1))
                {
                    newElement += (i + j);
                    cout << newElement << " ";
                }
                else
                {
                    newElement += temp;
                    temp--;
                    cout << newElement << " ";
                }
            }
            cout << endl;
            firstElement += (i + 2);
        }
    }
    return 0;
}