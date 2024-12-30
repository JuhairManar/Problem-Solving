# link - https://leetcode.com/problems/capitalize-the-title/

class Solution:
    def capitalizeTitle(self, title: str) -> str:
        ls=title.split(' ')
        ns=""
        n=len(ls)
        i=1
        for w in ls:
            if len(w)>2:
                ns+=w.capitalize()
            else:
                ns+=w.lower()
            
            if i<n:
                ns+=' '

            i+=1

        return ns
