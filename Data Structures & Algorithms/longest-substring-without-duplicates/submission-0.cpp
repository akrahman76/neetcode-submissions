class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        unordered_map<char,int>count;
        int l=0;
        
        for(int r=0;r<s.size();r++){
            count[s[r]]++;

            while(count[s[r]]>1){
                count[s[l]]--;
                l++;
            }

            maxLen = max(maxLen, r-l+1);
        }

        return maxLen;
    }
};
