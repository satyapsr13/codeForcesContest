// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int tt2 = 0;
int tt1 = 0;
void loadPrimes1(vector<int> &v)
{
    vector<bool> isPrime(10000, 1);

    for (int i = 2; i < sqrt(10000) + 1; ++i)
    {
        if (isPrime[i])
        {

                tt2++;
            for (int j = i * i; j < 10000; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i < 10000; ++i)
    {
        if (isPrime[i])
        {
            v.push_back(i);
            /* code */
        }
    }
}
void loadPrimes(vector<int> &v)
{
    vector<bool> isPrime(10000, 1);

    for (int i = 2; i < 10000; ++i)
    {
        if (isPrime[i])
        {

                 tt1++;
            for (int j = i * i; j < 10000; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i < 10000; ++i)
    {
        if (isPrime[i])
        {
            v.push_back(i);
            /* code */
        }
    }
}
void solve()
{
    int n, k, ans = 0, count = 0, sum = 0;
     

    vector<int> primes2;
    vector<int> primes1;
    loadPrimes1(primes2);
    cout << "\n--------------------"
         << "\n";
    // return;
    loadPrimes(primes1);
    db(tt1);
    db(tt2);
    if (primes1.size() == primes2.size())
    {

        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    {
        /* code */
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