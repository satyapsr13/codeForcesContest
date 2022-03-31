// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int arr[10];
int n;

int find(int i, bool limit)
{
    if (i == n)
    {
        return 0;
    }
    int r = 9;
    if (limit)
    {
        r = arr[i];
    }

    int res = 0;
    for (int ii = 0; ii <= r; ++ii)
    {
        res += find(i + 1, (limit and ii == arr[i])) + 1;
    }
    return res;
}

signed main()
{

    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i)
    {
        arr[i] = s[i] - '0';
    }
    cout << find(0, 1);

    return 0;
}


