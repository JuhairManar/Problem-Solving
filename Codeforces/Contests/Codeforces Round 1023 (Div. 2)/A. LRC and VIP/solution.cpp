// link - https://codeforces.com/contest/2107/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int i,a=0,n;
    cin>>n;
    vector<int>v(n),pre(n),suf(n),ans(n,-1);
    cin>>v[0];
    pre[0]=v[0];

    
    for(i=1;i<n;i++){
        cin>>v[i];
        pre[i]=__gcd(v[i],pre[i-1]);
    }

    suf[n-1]=v[n-1];

    for(i=n-2;i>=0;i--){
        suf[i]=__gcd(suf[i+1],v[i]);
    }

    for(i=0;i<n;i++){
        if((i-1>=0) && (i+1)<n){
            if(v[i]!=__gcd(pre[i-1],suf[i+1])){
                ans[i]=1;
                a=1;
                break;
            }
        }
        else if(i+1>=n){
            if(v[i]!=pre[i-1]){
                ans[i]=1;
                a=1;
                break;
            }
        }
        else {
            if(v[i]!=suf[i+1]){
                ans[i]=1;
                a=1;
                break;
            }
        }
    }

    if(a){
        cout<<"YES\n";
        for(i=0;i<n;i++){
            if(ans[i]!=1) cout<<2<<" ";
            else cout<<1<<" ";
        }
        cout<<"\n";
        return;
    }
    cout<<"NO\n";
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
