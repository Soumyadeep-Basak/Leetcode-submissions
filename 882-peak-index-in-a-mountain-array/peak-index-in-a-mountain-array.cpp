class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int l=0,h=v.size()-1,m;
        while(l<h)
        {
            m=l+(h-l)/2;

            if(v[m]>v[m+1])
            {
            h=m;
            }
            else
            {l=m+1;}
        }
        return l;
    }
};