class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m=INT_MAX,n=nums.size(),l=0,s=0,r;
        // vector<int> v(n);
        // v[0]=nums[0];
        // for(int i=1;i<n;i++)
        // v[i]=nums[i]+v[i-1];
        for(r=0;r<n;r++)
        { 
            s+=nums[r];
            while(s>=target)
            {
                m=min(m,r-l+1);
                s-=nums[l];
                l++;
            }
        }
        return (m == INT_MAX) ? 0 : m;
    }
};