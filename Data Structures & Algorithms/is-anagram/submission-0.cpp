class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.length();
        int size2 = t.length();

        unordered_map<char,int>count;

        if(size1 != size2){
            return false;
        }

        for(int i=0; i<size1; i++){
            count[s[i]]++;
        }

        for(int j=0; j<size2; j++){
            if(count.find(t[j])==count.end() || count[t[j]] == 0){
                return false;
            }

            count[t[j]]--;
        }

        return true;
    }
};
