class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int n =prices.size();
        for(int i=1;i<n;i++){
            sum+=max(0,prices[i]-prices[i-1]);

            //sum=max(0,-6)=0
            //sum=0;
            //sum=0+max(0,4)=4;
            //sum=4+max(0,-2)=4;
            //sum=4+max(0,3)=7
        }
        return sum;
    }
};