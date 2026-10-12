class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey,
                     string ruleValue) {
        int Index = 0;
        if (ruleKey == "color") {
            Index = 1;
        } else if (ruleKey == "name") {
            Index = 2;
        }

        int ans = 0;
        for (int i = 0; i < items.size(); i++) {
            if (items[i][Index] == ruleValue) {
                ans++;
            }
        }

        return ans;
    }
};