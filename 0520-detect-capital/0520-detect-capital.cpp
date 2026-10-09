class Solution {
public:
    bool detectCapitalUse(string word) {
        int caps = 0;
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') {
                caps++;
            }
        }
        if (caps == word.length())
            return true;
        if (caps == 0)
            return true;
        if (caps == 1 && (word[0] >= 'A' && word[0] <= 'Z'))
            return true;
        return false;
    }
};
