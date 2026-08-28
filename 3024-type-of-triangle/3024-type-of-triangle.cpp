class Solution {
public:
    string triangleType(vector<int>& nums) {
        int i = 0;
            // if(nums[i]+nums[i+1]+nums[i+2] == 3*nums[i]){
            //     return "equilateral";
            // } 
            // else if( ( (nums[i]+nums[i+1]) > nums[i+2] )
            //     &&   ( (nums[i] + nums[i+2]) > nums[i+1] )
            //     &&   ( (nums[i+1] + nums[i+2]) > nums[i] )
            //         ){
            //             return "scalene";
            //         }
            // else
            //     return "isosceles";
        
        if(
            ( (nums[i]+nums[i+1]) <= nums[i+2] )
            ||   ( (nums[i] + nums[i+2]) <= nums[i+1] )
            ||   ( (nums[i+1] + nums[i+2]) <= nums[i] )
        )
            return "none";

        if(nums[i]==nums[i+1] && nums[i]==nums[i+2])
                return "equilateral";
            
            else if(nums[i]==nums[i+1] 
                    || nums[i+1]== nums[i+2]
                    || nums[i] == nums[i+2])
                        return "isosceles";
                    
                return "scalene";
        }
        
        
        
        
        
    
};