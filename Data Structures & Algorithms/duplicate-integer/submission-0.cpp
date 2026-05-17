class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;

        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) == count.end()){
                count[nums[i]]++;
            }
            else{
                return true;
            }
        }

        return false;
    }
};