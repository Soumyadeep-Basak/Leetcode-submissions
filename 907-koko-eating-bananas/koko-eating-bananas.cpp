class Solution {
public:
    bool isval(long long m,vector<int>& piles,long long h)
    {   long long c=0;
        for(int i=0;i<piles.size();i++)
        {
            c+=piles[i]/m+((piles[i]%m)!=0);
        }
        return h>=c;
    }

    long long minEatingSpeed(vector<int>& piles, int h) {
        long long m,l=max(1LL,accumulate(piles.begin(), piles.end(), 0LL)/h),r=*max_element(piles.begin(), piles.end());
        // long long m,l=1,r=*max_element(piles.begin(), piles.end());
        while(l<r)
        {
            m=l+(r-l)/2;
            if(isval(m,piles,h))
            {r=m;}
            else
            {l=m+1;}
        }
        return l;
    }
};