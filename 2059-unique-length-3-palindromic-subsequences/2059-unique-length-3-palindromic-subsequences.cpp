class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        vector<int> l(26, 0), r(26, 0);

        for (char c : s) {
            r[c - 'a']++;
        }

        unordered_set<string> p;

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';
            r[idx]--;

            for (int j = 0; j < 26; j++) {
                if (l[j] > 0 && r[j] > 0) {
                    string pal = string(1, 'a' + j) + s[i] + string(1, 'a' + j);
                    p.insert(pal);
                }
            }

            l[idx]++;
        }

        return p.size();
    }
};
