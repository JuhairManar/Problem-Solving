// link - https://codeforces.com/contest/2091/problem/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int>v{0,1,0,3,2,0,2,5};


void solve(){
    
    multiset<int>mt{v.begin(),v.end()};

    // for(auto g:mt)cout<<g;

    int n,i;
    cin>>n;
    vector<int>v(n);


    for(i=0;i<n;i++) cin>>v[i];

    for(i=0;i<n;i++) {

        auto g=mt.find(v[i]);
        if(g!=mt.end()){
            mt.erase(g);
        }
        if(mt.size()==0) {
            cout<<i+1<<"\n";
            return ;
        }
    }

    cout<<0<<"\n";

    return;
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