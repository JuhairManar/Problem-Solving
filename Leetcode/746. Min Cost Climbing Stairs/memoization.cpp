class Solution {
    
    long mc(long n, vector<int> &cost, vector<int> &v)
{
    cout << "n = " <<n<< endl;
    // cout<<cost.size()<<endl;
    // cout<<v.size()<<endl;
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return cost[0];
    }
    if (v[n]>0)
    {
        //cout << "Yes\n";
        return v[n];
    }
    if (n - 1 >= 0)
    {
        //cout << "Yes\n";
        v[n - 1] = mc( n - 1, cost, v);
    }
    // mn=min(mn,s);
    // cout<<"mn = "<<mn<<endl;
    // s-=cost[n];
    // cout<<"s = "<<s<<endl;
    cout << " v[n-1] " << v[n - 1] << endl;
    if (n - 2 >= 0)
    {
        //cout<<"Yes  n-2 \n";
        v[n - 2] = mc(n - 2, cost, v);
        v[n] = cost[n] + min(v[n - 1], v[n - 2]);
    }
    else
    {
        v[n] = cost[n];
    }
    cout<<"n=   v[n]=  "<<n<<" "<<v[n]<<endl;
    return v[n];
}

public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n=cost.size(),sum;
        vector<int>v(n,0);
        //sum=mc(n,cost,v);
        return mc(n-1,cost,v);;
    }
};
