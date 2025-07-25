class Solution {
public:
    int maxProfit(vector<int>& a) {
     int p=0,m=a[0],c,n=a.size();
        // int dp[];
        for(int i=1;i<n;i++)
        {
            if(a[i]>=m)
            {
                p+=a[i]-m;
                m=a[i];
            }
            else
            m=min(m,a[i]);
        }
        return p;   
    }
};

