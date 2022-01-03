// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
class a
{
// public:
    int a;
    int b;
};
class a1 : private a
{
public:
    int a;
};

signed main()
{
    a1 a;
    cout << sizeof(a);

    return 0;
}