// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
void solve()
{
    int n ;
    cin >> n;

    for (int i = 0; i < n / 2; i += 1)
    {
        cout << 0 << " \n";
        cout << (1LL << i) * 1LL << " \n";
    }
    if (n & 1)
    {
        cout << "0"
             << "\n";
 
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