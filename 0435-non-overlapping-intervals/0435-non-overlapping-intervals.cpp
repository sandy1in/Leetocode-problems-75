bool com(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int res=-1;
        int n=intervals.size();
        if(n==0)
        {
            return 0;
        }
        sort(intervals.begin(),intervals.end(),com);
        vector<int>temp=intervals[0];
        for(vector<int>i:intervals)
        {
            if(temp[1]>i[0])
            {
                res++;
            }   
            else
            {
                temp=i;
            }
        } 
        return res;   
    }
};