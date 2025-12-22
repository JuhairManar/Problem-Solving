// link - https://codeforces.com/problemset/problem/1850/E

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
   ll n,i,c,j,l,r,mid,ans=1e9;
   cin>>n>>c;
   vector<ll>v(n);     
   for(auto &g:v) cin>>g;
   
   l=1;r=1e9;

   while(l<=r){
    mid=(l+r)/2;
    __int128 s=0;
    for(auto g:v){
        // mid*=2;
        __int128 a=(mid*2)+g;
        s+=(a*a);
    }

    if(s<=c){
        l=mid+1;
        ans=mid;
    }
    else{
        r=mid-1;
    }
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
