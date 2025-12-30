// link- https://codeforces.com/contest/1873/problem/E
 
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

// 1 2 2 3 4 5 6

// 1 3 4 4
void solve(){
   ll n,i,j,l,h,m,x,w,ans;
   cin>>n>>w;
   
   vector<ll>v(n);
   for(auto &g:v) cin>>g;
   sort(v.begin(),v.end());

   l=v[0];h=1e10;
   ans=l; 
   while(l<=h){
    m=(l+h)/2;
    ll s=0;

    for(auto g:v){
        if(g>m) break;
        s+=(m-g);
    }
    if(s>w){
       h=m-1;         
    }
    else{
        ans=m;
        l=m+1;
    }
    // cout<<m<<" "<<s<<" "<<ans<<"\n";
   }

   cout<<ans<<"\n";
    
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
