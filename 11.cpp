// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
class DSU
{
    vector<int> v, sz;
    DSU(int n)
    {
        v.resize(n + 1, 0);
        sz.resize(n + 1, 0);

        for (int i = 0; i <= n; ++i)
        {
            v.push_back(i);
            sz.push_back(1);
        }
    }

    void Union(int v, int u)
    {
        int pu = findParent(u);
        int pv = findParent(v);
        if (pu == pv)
        {
            return;
        }
        if (sz[pv] > sz[pu])
        {
            

        }

        else
        {
        }
    }

} signed main()
{
    int hnd = pow(10, 2);
    cout << hnd;
    return 0;
}
