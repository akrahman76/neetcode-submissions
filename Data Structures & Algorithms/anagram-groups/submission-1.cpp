class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res_map;
        for(int i=0; i<strs.size(); i++){
            string tempS = strs[i];
            vector<int>freq(26,0);

            for(char c:tempS){
                freq[c-'a']++;
            }

            string key = to_string(freq[0]);
            for(int j=1; j<26;j++){
                key+= "," + to_string(freq[j]);
            }

            res_map[key].push_back(strs[i]);
        }

        vector<vector<string>>result;
        for(auto& pairs:res_map){
            result.push_back(pairs.second);
        }

        return result;
    }
};
