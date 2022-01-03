 #include <bits/stdc++.h>
#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int dat)
    {   

        this->data = dat;
        
        this->left = this->right = nullptr;

        
    }   

};

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    return 0;
}



