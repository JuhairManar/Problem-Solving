class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0,n=name.size(),m=typed.size(),c=0;

        while(i<n && j<m){
            if(name[i]==typed[j]){
                cout<<name[i]<<" "<<typed[j]<<endl;
                c++;
                i++;j++;
            }
            else{
                if(i==0 && j==0) return 0;
                while(j<m && typed[j]==name[i-1]) j++;
            }
        }

        while(j<m){
            if(name[i-1]!=typed[j]) return 0;
            j++;
        }
        if(c<n) return 0;
        return 1;

    }
};
