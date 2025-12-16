// link- https://codeforces.com/problemset/problem/2169/B

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
   ll n,i,mx=1,t=1;       
   string s;
   cin>>s;
   if((s.find("><")!=s.npos) || (s.find("**")!=s.npos) || (s.find(">*")!=s.npos) || (s.find("*<")!=s.npos)){
    cout<<"-1\n";
    return ;
   } 
   if(s.size()==1){
    cout<<"1\n";
    return;
   }

   char c;

   for(i=1;i<s.size();i++){
    if(s[i]!=s[i-1]){
        t=1;
        
        mx=max(mx,t);
    }
    else{
        t++;
        mx=max(mx,t);
    }
   }
   if(s.find("*")!=s.npos) mx++;
   cout<<mx<<"\n";
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
