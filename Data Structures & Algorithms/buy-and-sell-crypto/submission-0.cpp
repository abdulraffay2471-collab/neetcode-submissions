class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int maxp=0;                     //left=buying price; right=selling price;
        while (right<prices.size()){
            if(prices[left]<prices[right]){
              int profit=prices[right]-prices[left];
                maxp=max(maxp , profit);
            }else{
                left=right;
                
            }
            right++;
        }
        return maxp;


        
    }
};
