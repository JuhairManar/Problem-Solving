// link - https://codeforces.com/problemset/problem/1891/B


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

ll power(ll p){
    ll ans=2,i;
    for(i=1;i<p;i++){
        ans*=2;
    }

    return ans;
}

void solve(){
   ll n,i,q,k,j,a,x;
   cin>>n>>q;
   
   vector<ll>v(n),vis(31,0);
   for(i=0;i<n;i++) cin>>v[i];

   for(i=0;i<q;i++){
        cin>>x;
        if(vis[x]==0){
            ll pr=power(x);
            vis[x]=1;
            for(auto &g:v){
                if(g%pr==0) g+=(pr/2);
            }
        }
   }

   for(auto g:v) cout<<g<<" ";
   cout<<"\n";
    
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
