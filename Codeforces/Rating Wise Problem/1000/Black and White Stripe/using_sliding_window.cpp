// https://codeforces.com/contest/1690/problem/D

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,k,i,j,mn=1e9;
   cin>>n>>k;
   string s;
   vector<int>v(n,0);
   cin>>s;
   v[0]=(s[0]=='W');
   for(i=1;i<n;i++){
        v[i]=v[i-1]+(s[i]=='W');
   }    
   mn=min(mn,v[k-1]);
   j=1;i=k;
   for(i;i<n;i++){
    mn=min(mn,v[i]-v[j-1]);
    j++;
   }    
   cout<<mn<<"\n";                           
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
