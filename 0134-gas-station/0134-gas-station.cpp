class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_gas=0,total_cost=0;
        int start=0;
        int cgas=0;
        for(int i=0;i<n;i++)
        {
            total_gas+=gas[i];
            total_cost+=cost[i];
            cgas+=gas[i]-cost[i];
            if(cgas<0)
            {
                start=i+1;
                cgas=0;
            }
        }
        return (total_gas<total_cost)?-1:start;     

    }
};