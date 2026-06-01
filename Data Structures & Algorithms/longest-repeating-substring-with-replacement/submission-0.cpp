class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0;
        unordered_set<char>unique;

        for(char& c: s){
            unique.insert(c);
        }

        for(auto& c:unique){
            int count = 0;
            int l=0;

            for(int r=0;r<s.length();r++){
                if(s[r]==c){
                    count++;
                }

                while((r-l+1)-count>k){
                    if(s[l]==c){
                        count--;
                    }

                    l++;
                }

                result = max(result,(r-l+1));
            }
        }

        return result;
    }
};
