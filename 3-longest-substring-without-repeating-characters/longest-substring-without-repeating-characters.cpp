class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r,mn=0;
        map<char,int> m;
        if(s.size()<2)
        return s.size();
        for(int r=0;r<s.size();r++)
        {   
            
            while(m.find(s[r])!=m.end())
            {
                m.erase(s[l]);
                l++;
            }
            mn=max(mn,r-l+1);
            m[s[r]]=1;
        }
        mn=max(mn,r-l+1);
        return mn;
    }
};