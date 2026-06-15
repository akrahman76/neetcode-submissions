class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>result;

        for(int i = 0; i<temperatures.size(); i++){
            int count = 0;
            bool found = false;
            for(int j = i + 1; j<temperatures.size(); j++){
                if(temperatures[j] > temperatures[i]){
                    count++;
                    found = true;
                    break;
                }

                count++;
            }

            if(found){
                result.push_back(count);
            }
            else{
                result.push_back(0);
            }
        }

        return result;
    }
};
