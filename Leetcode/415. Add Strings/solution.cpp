class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size(),n2=num2.size(),mx=max(n1,n2),i=n1-1,j=n2-1,k=mx-1,c=0,a,b,sum,lg;
        string s(mx,'0');
        while(i>=0 && j>=0){
            a=num1[i]-'0';
            b=num2[j]-'0';
            // cout<<a<<" "<<b<<endl;
            sum=a+b+c;
            lg=sum%10;
            // cout<<lg<<endl;
            c=sum/10;
            s[k]=char(lg+48);
            i--;j--;k--;
        }

        while(i>=0){
            a=num1[i]-'0';
            sum=a+c;
            lg=sum%10;
            // cout<<lg<<endl;
            c=sum/10;
            s[k]=char(lg+48);
            i--;k--;
        }

        while(j>=0){
            a=num2[j]-'0';
            sum=a+c;
            lg=sum%10;
            // cout<<lg<<endl;
            c=sum/10;
            s[k]=char(lg+48);
            j--;k--;
        }

        if(c){
            s=char(c+48)+s;
        }
        return s;
    }
};
