// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
void solve()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
}
int mexFinder(vector<int> &v, int l, int r)
{
    int n = v.size();
    int arr[n + 2] = {0};

    for (int i = l; i < r; ++i)
        v[i] < n + 2 ? arr[v[i]] = 1 : n = n;
    for (int i = 0; i < n + 2; ++i)
        if (!arr[i])
            return i;
    return n;
}
signed main()
{

    vector<int> v;
    v.push_back(8);
    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    cout << mexFinder(v, 0, v.size());
    return 0;
}