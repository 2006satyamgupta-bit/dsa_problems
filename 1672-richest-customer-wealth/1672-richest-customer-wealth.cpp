class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealthSum = 0;
        for(auto money: accounts){
            int curr = 0;
            for(int x: money){
                curr+=x;
            }
            wealthSum = max(wealthSum, curr);
        }
        return wealthSum;
    }
};