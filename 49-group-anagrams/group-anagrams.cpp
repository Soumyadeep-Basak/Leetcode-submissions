class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> m;
        map<char,int> c;
        vector<string> v;
        for(auto s:strs)
        {
            for(int i=0;i<s.size();i++)
            {
                c[s[i]]++;
            }
            
            if(m.find(c)!=m.end())
            {
                v=m[c];
                v.push_back(s);
                m[c]=v;
            }
            else
            {
                v.push_back(s);
                m[c]=v;
            }
            c.clear();
            v.clear();
        }
    vector<vector<string>> f;
   for (auto& [key, value] : m) {
    f.push_back(value);
    }

    return f;

    }
};