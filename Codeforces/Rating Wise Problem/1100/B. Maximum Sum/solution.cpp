// link - https://codeforces.com/problemset/problem/1832/B


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

// 10 11 12 13 15 22

ll max_sum(vector<ll>&pre,vector<vector<ll>>&mat,ll k,ll x,ll y){
    if(k==0) return pre[y]-pre[x-1];

    // ll e=pre[y]-pre[x+1];
    // ll r=pre[y-1]-pre[x-1];

    if(mat[x][y]) return mat[x][y];

    ll e=max_sum(pre,mat,k-1,x+2,y);
    ll r=max_sum(pre,mat,k-1,x,y-1);

    mat[x][y]=max(e,r);
    return mat[x][y];
}

void solve(){
   ll n,i,k,x,y,ans=0;
   cin>>n>>k;
   vector<ll>v(n+1),pre(n+1,0);
   
   for(i=1;i<=n;i++) cin>>v[i];

   sort(v.begin(),v.end());

   for(i=1;i<=n;i++){
    pre[i]=pre[i-1]+v[i];
   }
   vector<vector<ll>>mat(n+1,vector<ll>(n+1,0));
    cout<<max_sum(pre,mat,k,1,n)<<"\n";
    
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
