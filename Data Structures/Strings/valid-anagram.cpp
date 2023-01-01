class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        int h[26] = {0};
        for (int i = 0; i < s.size(); i++)
            h[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++) {
            if (--h[t[i] - 'a'] < 0)
                return false;
        }
        return true;     
    }
};
