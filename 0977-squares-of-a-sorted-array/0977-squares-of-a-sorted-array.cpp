class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squaredNums;
        for(int i = 0; i<nums.size(); i++){
            squaredNums.push_back(pow(nums[i], 2));
        } 
        sort(squaredNums.begin(), squaredNums.end());
        return squaredNums;
        }

};