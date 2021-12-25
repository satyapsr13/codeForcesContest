// // Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>

// #define db(x) cout << __LINE__ << "->" \
//                    << " " << #x << "\t" << x << "\t\n"
// using namespace std;
// void solve()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     cin >> n;
// }
// bool cmp(string a, string b)
// {
//     return a > b;
// }
// signed main()
// {
//     priority_queue<string, , vector<string>, cmp> p;
//     p.push("ctya");
//     p.push("atya");
//     p.push("btya");
//     cout << p.top();

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string value;
    priority_queue<string, vector<string>, greater<string>> pq;
    // priority_queue<string > pq;
    pq.push("a");
    pq.push("bsss");
    pq.push("c");

    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        cout << it<< " ";
    }
    
    return 0;
}