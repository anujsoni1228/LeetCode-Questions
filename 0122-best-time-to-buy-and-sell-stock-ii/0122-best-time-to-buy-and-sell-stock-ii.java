class Solution {
    
    
    // make a upper niche jane wala graph using the prize points and usme jitne bhi up-ups he na means jitne me bhi hikes he utne bar unhi hikes ko profit me add krdo that's it
    
    public int maxProfit(int[] prices) 
    {
        int profit=0;
        for(int i=0;i+1<prices.length;i++)
        {
            // if there is a hike then include its profit
            if(prices[i]<prices[i+1])
            {
                profit+=prices[i+1]-prices[i];
            }                
        }
        return profit;
    }
}