// link - https://codeforces.com/contest/2106/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    long ans=0,ss=0,n;
    cin>>n;
    cin>>s;

    
    for(auto g:s){
        if(g=='1') ss++;
    }

    for(auto g:s){
        if(g=='1') ans+=ss-1;
        else ans+=ss+1;
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
    
    while(t--){
        solve();
    }


  return 0;
}
