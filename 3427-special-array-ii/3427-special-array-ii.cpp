class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        vector<int> temp(n);
        temp[0] = 1;
        vector<bool> res;

        for (int i = 1; i < n; i++) {
            if ((nums[i] & 1) != (nums[i - 1] & 1)) {
                temp[i] = temp[i - 1] + 1;
            } else {
                temp[i] = 1;
            }
        }

        for (auto& it : queries) {
            int l = it[0], r = it[1];
            int len = r - l + 1;
            res.push_back(temp[r] >= len);
        }
        return res;
    }
};
