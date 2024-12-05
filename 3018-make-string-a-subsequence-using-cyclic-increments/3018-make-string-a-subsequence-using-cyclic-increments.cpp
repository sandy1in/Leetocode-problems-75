class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
        int tar=0;
        int tlen=str2.length();
        for(char ch:str1)
        {
            if(tar<tlen && (str2[tar]-ch+26)%26<=1)
            {
                tar++;
            }
        }
        return tar==tlen;
    }
};