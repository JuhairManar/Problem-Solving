class Solution {
public:
    int nthUglyNumber(int n) 
{
    int v[n];
    v[0]=1;
    int p1=0,p2=0,p3=0,i;
    for(i=1;i<n;i++)
    {
        int a,b,c;
        a=2*v[p1];
        b=3*v[p2];
        c=5*v[p3];
        v[i]=min(a,min(b,c));
        if(v[i]==a) {p1++;}
        if(v[i]==b) {p2++;}
        if(v[i]==c) {p3++;}

    }
    return v[n-1];
        
}
};
