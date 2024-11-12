class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) 
    {
        sort(items.begin(), items.end());
        vector<pair<int, int>> q;
        for (int i = 0; i < queries.size(); i++) 
            q.push_back({queries[i], i});
        sort(q.begin(), q.end());
        
        int maxB = 0, idx = 0;
        vector<int> res(queries.size(), 0);
        
        for (auto& x : q) {
            while (idx < items.size() && items[idx][0] <= x.first) {
                maxB = max(maxB, items[idx][1]);
                idx++;
            }
            res[x.second] = maxB;
        }
        
        return res;
    }
};