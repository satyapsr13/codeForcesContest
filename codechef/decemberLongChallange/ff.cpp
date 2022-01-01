// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 4; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {

            if (i + j >= 10 and i >= j)
                cout << "*";
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}