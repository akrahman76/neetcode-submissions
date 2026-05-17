class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        vector<bool>visited(strs.size(),false);
        
        for(int i=0; i<strs.size(); i++){
            if(!visited[i]){
                string s = strs[i];
                vector<string>sub_str;
                sub_str.push_back(s);
                visited[i]=true;
                sort(s.begin(),s.end());

                //anagram
                for(int k=i; k<strs.size(); k++){
                    if(!visited[k]){
                        string temp = strs[k];
                        sort(temp.begin(),temp.end());
                        if(temp == s){
                            visited[k] = true;
                            sub_str.push_back(strs[k]);
                        }
                    }
                }
                result.push_back(sub_str);
            }
        }

        return result;
    }
};
