/*class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n=s.size();
        s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
        s.erase(remove(s.begin(), s.end(), ','), s.end());         
        s.erase(remove(s.begin(), s.end(), '.'), s.end()); 
        s.erase(remove(s.begin(), s.end(), '@'), s.end()); 
        s.erase(remove(s.begin(), s.end(), '#'), s.end()); 

        s.erase(remove(s.begin(), s.end(), ':'), s.end()); 
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
        string p=s;
        reverse(p.begin(),p.end());
        if(p==s)
        {
            return true;
        }


        return false; 
    }
};
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};