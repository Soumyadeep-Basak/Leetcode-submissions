class Solution {
public:
    int maxArea(vector<int>& h) {
        int c,m=0,l=0,r=h.size()-1;
        while(l<r)
        {
            c=min(h[l],h[r])*(r-l);
            m=max(m,c);
            if(h[l]<=h[r])
            l++;
            else if(h[l]>h[r])
            r--;
        }
        return m;
    }
};