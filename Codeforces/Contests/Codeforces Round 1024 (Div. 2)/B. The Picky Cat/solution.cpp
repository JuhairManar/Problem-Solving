// link - https://codeforces.com/contest/2102/problem/B

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    long n,mid,i,cg=0,a;
    cin>>n;
    vector<long>v(n,0);
    for(i=0;i<n;i++) cin>>v[i];
    if(n<=2){
        cout<<"YES\n";
        return ;
    }
    mid=(n-1)/2;
    for(i=1;i<n;i++){
        if(abs(v[i])>abs(v[0])) cg++;
    }
    if(cg>=mid){
        cout<<"YES\n";
        return ;
    }

    else{
        a=v[0];
        v[0]=-v[0];
        sort(v.begin(),v.end());
        if(v[mid]==-a){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return ;
        }

    }
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
