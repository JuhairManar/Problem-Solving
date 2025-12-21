// link- https://codeforces.com/problemset/problem/1374/C

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
#define gf g.first
#define gs g.second
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i;       
   cin>>n;
   stack<char>st;
   string s;
   cin>>s;
   for(auto g:s){
    if(st.size()==0){
        if(g=='(') st.push(g);
    }
    else{
        if(g==')'){
            if(st.top()=='(') st.pop();
        }
        else st.push('(');
    }
   } 

   cout<<(ll) st.size()<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    while(t--) solve();


  return 0;
}
