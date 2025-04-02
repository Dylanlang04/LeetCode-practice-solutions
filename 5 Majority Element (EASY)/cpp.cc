class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            //Moore vote alg
            int majorityEle = 0;
            int c = 0;
            for(int i = 0; i< nums.size(); i++) {
                if (c == 0) {
                    c++;
                    majorityEle = nums[i];
                } else if (majorityEle == nums[i]) {
                    c++;
                } else {
                    c--;
                }
                
            }
            return majorityEle;
            
        }
    };