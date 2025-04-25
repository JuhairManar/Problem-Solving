// link -https://codeforces.com/contest/2106/problem/B

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    long n,x,i;
    cin>>n>>x;
    if(n==x){
        for(i=0;i<n;i++) cout<<i<<" ";
    }
    else{
        for(i=0;i<n;i++){
            if(i!=x) cout<<i<<" ";
        }
        cout<<x;
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
    
    while(t--){
        solve();
    }


  return 0;
}
