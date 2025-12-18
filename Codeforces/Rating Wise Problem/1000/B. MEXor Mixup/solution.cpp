// link -   https://codeforces.com/problemset/problem/1567/B


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   ll n,a,b;
   cin>>a>>b;
   ll t=a-1;
   if(t%4==1) t=1;
   else if(t%4==2) t++;
   else if(t%4==3) t=0;
   
  //  cout<<t<<endl;
   if(t==b){
    cout<<a<<"\n";
    return;
   }
   if((t^b)==a){
    cout<<a+2<<"\n";
    return;
   }
   cout<<a+1<<"\n";
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
