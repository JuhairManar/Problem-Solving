// link - https://codeforces.com/contest/2091/problem/B

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,x,i,tc=0,s=0,mn=LONG_MAX,oc=0;
    cin>>n>>x;

    vector<ll>v(n);

    for(i=0;i<n;i++) cin>>v[i];

    sort(v.rbegin(),v.rend());

    for(i=0;i<n;i++){
        // s+=v[i];
        tc++;
        mn=min(mn,v[i]);
        if(mn*tc>=x){
            oc++;
            tc=0;
            // s=0;
            mn=LONG_MAX;
        }
    }
    cout<<oc<<"\n";
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