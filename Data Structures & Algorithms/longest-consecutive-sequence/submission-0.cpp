class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int res = 0;
        int count = 0;
        int curr;

        for(int i=0; i<nums.size(); i++){
            if(numset.find(nums[i]-1) != numset.end()){
                count = 0;
                continue;
            }
            curr = nums[i];
            count = 0;
            while(numset.find(curr) != numset.end()){
                count++;
                curr++;
            }

            res = max(count,res);
        }

        return res;
    }
};
