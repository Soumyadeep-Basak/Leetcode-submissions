class Solution {
public:
    int maxScore(string s) {
     int n=s.size();
     vector<int> v1,v2(n);
     if(s[0]=='0')
     v1.push_back(1);
     else
     v1.push_back(0);
     for(int i=1;i<n;i++)
     {
        v1.push_back(v1[i-1]+(s[i]=='0'));
     }   
     if(s[n-1]=='1')
     v2[n-1]=1;
     else
     v2[n-1]=0;
        for(int i=n-2;i>=0;i--)
     {
        v2[i]=v2[i+1]+(s[i]=='1');
     }  
    int m=0;
    if(n==2)
    {
        if(s=="00" || s=="11")
        return 1;
        else if(s=="01")
        return 2;
        else 
        return 0;
    }
    for(int i=1;i<n-1;i++)
    m=max(m,v1[i]+v2[i]);
    // m=min(m,n-1);
    return m;
    }
};