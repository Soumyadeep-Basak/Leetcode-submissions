class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        auto cmp = [](const pair<int,int> &a,const  pair<int,int> &b) {
            return a.first>b.first;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        
for (auto [num, freq] : m) {
    pq.push({freq, num});
    if (pq.size() > k) pq.pop();   
}

        vector<int> v;
       while(!pq.empty()) {
        v.push_back(pq.top().second);
        pq.pop();
        }
        return v;
    }
};