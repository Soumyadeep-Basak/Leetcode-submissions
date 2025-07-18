class Solution {
public:
    int characterReplacement(string s, int k) {
    int l=0,r=0,mx=0,k1=k;
    unordered_map<char,int> m;
    m[s[0]]++;
    int c=0,f=0;
    for(int r=1;r<s.size();r++)
    {   
         m[s[r]]++;
        c=max(c,m[s[r]]);
         while ((r-l+1)-c>k) {
                m[s[l]]--;
                l++;
            }
        mx=max(mx,r-l+1);
    }

    return s.size()==1?1:mx;
    }
};