// link - https://codeforces.com/problemset/problem/1831/B


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
   ll n,i,j,mx=1,ans=0;
   cin>>n;
   vector<ll>a((2*n)+1,0),b((2*n)+1,0),v1(n),v2(n);
   for(auto &g:v1) cin>>g;   
   for(auto &g:v2) cin>>g;

//    for(auto g:a) cout<<g<<" ";
//    cout<<endl;
   
   for(i=1;i<n;i++){
    if(v1[i]!=v1[i-1]){
        a[v1[i-1]]=max(mx,a[v1[i-1]]);
        mx=1;
    }
    else mx++;
    // cout<<v1[i]<<endl;
   }
    a[v1[i-1]]=max(mx,a[v1[i-1]]);
//    for(auto g:a) cout<<g<<" ";
//    cout<<endl;

   mx=1;

   for(i=1;i<n;i++){
    if(v2[i]!=v2[i-1]){
        // cout<<v2[i-1]<<"\n";
        // cout<<mx<<endl;
        b[v2[i-1]]=max(mx,b[v2[i-1]]);
        // cout<<v2[i-1]<<"  "<<b[v2[i-1]]<<"\n";
        mx=1;
    }
    else mx++;

    // cout<<v2[i]<<endl;
   }

   b[v2[i-1]]=max(mx,b[v2[i-1]]);


//    for(auto g:a) cout<<g<<" ";
//    cout<<endl;
//    for(auto g:b) cout<<g<<" ";
//    cout<<endl;

   for(i=1;i<=(2*n);i++){
    // cout<<v1[i]<<" "<<v2[i]<<"\n";
    ans=max(ans,a[i]+b[i]);
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
