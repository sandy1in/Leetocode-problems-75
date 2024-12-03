class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        string str;
        int j = 0; 

        for (int i = 0; i < n; i++) 
        {
            if (j < spaces.size() && i == spaces[j])
            {
                str += ' '; 
                j++; 
            }
            str += s[i];
        }

        return str;
    }
};
