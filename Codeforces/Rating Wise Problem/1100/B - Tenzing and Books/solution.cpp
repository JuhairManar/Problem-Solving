// link - https://codeforces.com/problemset/problem/1842/B


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
   ll n,i,j,x,k=0,a;
   cin>>n>>x;
   vector<vector<ll>>v(3,vector<ll>(n));
   
   for(i=0;i<3;i++){
    for(j=0;j<n;j++){
        cin>>v[i][j];
    }
   }

   for(i=0;i<3;i++){
    for(j=0;j<n;j++){
        a=v[i][j];
        if((x|a)==x) k|=a;
        else break;
    }
   }

   if(k==x) cout<<"Yes\n";
   else cout<<"No\n";
    
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
