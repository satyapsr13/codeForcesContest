// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
class Node{
    Node *links[26];
    bool containsKey(char ch)
    {
        return links[ch-'a'] 
    }
    void put(char ch,Node *node)
    {
        links[ch - 'a'] = node;
    }
    Node* get(char ch)
    {
        return return links[ch - 'a'];
    }
};
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}



