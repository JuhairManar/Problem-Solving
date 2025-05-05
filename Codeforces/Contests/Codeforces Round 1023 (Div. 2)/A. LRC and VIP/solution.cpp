// link - https://codeforces.com/contest/2107/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int i,a=0,n,mn=10000,mx=-1,mni,mxi;
    cin>>n;
    vector<int>v(n),ans(n,-1);
    for(i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>mx){
            mx=v[i];
            mxi=i;
        }
        if(v[i]<mn){
            mn=v[i];
            mni=i;
        }
    }

    if(mn==mx){
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
    ans[mxi]=1;
    for(i=0;i<n;i++){
        if(ans[i]==-1) cout<<"2 ";
        else cout<<"1 ";
    }
    cout<<endl;
    
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
