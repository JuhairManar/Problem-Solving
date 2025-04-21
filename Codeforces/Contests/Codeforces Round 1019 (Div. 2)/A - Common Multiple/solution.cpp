// link - https://codeforces.com/contest/2103/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int i,n,d;
    set<int>s;
    cin>>n;
    while(n--){
        cin>>d;
        s.insert(d);
    }

    cout<<s.size()<<"\n";
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
