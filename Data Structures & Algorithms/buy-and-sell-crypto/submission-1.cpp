class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max=0, res;

    int n=prices.size();

    for(int i=0;i<n;i++){

        for(int k=i+1;k<n;k++){

           res= (prices[k]-prices[i]);
           if(res>max)
               max=res;

        }
    }
    return max;
        
    }
};
