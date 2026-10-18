class Solution {
public:
    int scoreOfString(string s) {
        int score = 0; 
        for(int c = 0; c<(int)s.size()-1;c++){
            score += abs(s[c]-s[c+1]);
        }
        return score;
    }
};