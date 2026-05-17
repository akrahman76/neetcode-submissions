class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>index;

        for(int i=0; i<nums.size(); i++){
            index[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){
            int numj = target - nums[i];
            if(index.find(numj) != index.end()){
                int j = index[numj];

                if(i!=j) return {i,j};
            }
        }

        return {-1,-1};
    }
};
