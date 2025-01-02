class Solution {
public:
    int vow(char c){
        if(c=='a' || c=='i' || c=='o' || c=='e' || c=='u')
        return 1;
        else 
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        vector<int> p,v;
        for(int i=0;i<words.size();i++)
        {   if(vow(words[i][0]) && vow(words[i][words[i].size()-1]))
            p.push_back(1);
            else
            p.push_back(0);
        }
        int u,l,u1,l1;
        for(int i=1;i<p.size();i++)
        p[i]=p[i]+p[i-1];
        for(int i=0;i<queries.size();i++)
        {
            u=queries[i][1];
            l=queries[i][0];
            

            u1=p[u];
            
            if(l==0)
            l1=0;
            else
            l1=p[l-1];
            v.push_back(u1-l1);
        }
        return v;
    }
};