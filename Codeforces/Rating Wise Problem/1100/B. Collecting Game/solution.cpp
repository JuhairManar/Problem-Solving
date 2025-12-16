// link- https://codeforces.com/problemset/problem/1904/B

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
   ll n,i,j,c,d,p=1;
   cin>>n;
   vector<ll>v(n+1),pre(n+2,0),ans(n+1,0);
   vector<pair<ll,ll>>vp(n+1);
   for(i=1;i<=n;i++){
    cin>>v[i];
    vp[i]={v[i],i};
   }       

   sort(vp.begin(),vp.end());
   for(i=1;i<=n;i++){
    pre[i]=pre[i-1]+vp[i].first;
   }


   ll ts=vp[1].first;
   for(i=1;i<=n;i++){
    p=max(i,p);
    ts=pre[p];
    ll a=vp[i].first,b=vp[i].second;
    while(p+1<=n && ts>=vp[p+1].first){
        ts+=vp[p+1].first;
        p+=1;
        
    }

    ans[b]=p-1;
    // cout<<"p-- "<<p<<endl;

   }

   for(i=1;i<=n;i++){
    cout<<ans[i]<<" ";
   }
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
