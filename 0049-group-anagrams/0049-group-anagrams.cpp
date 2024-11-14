class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n=strs.size();
        map<string,vector<string>> mp;

        for(auto x: strs)
        {
            string word=x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }
        vector<vector<string>> res;
        for(auto x:mp)
        {
            res.push_back(x.second);
        }
        return res;
    }
};

//         for(int i=0;i<n;i++)
//         {
//             for(int j=i;j<strs[i].size();j++)
//             {

//                 mp.push_back(strs[j]);
//                 v[strs[j]]++;

//             }
//             if(v[strs[i]]==v[strs[j]])
//             {

//             }

//         }    
//         return k;
//     }
// };