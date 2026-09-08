class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> hash;
        for (char ch : s){
            hash[ch]++;
        }
        for (char ch : t){
            hash[ch]--;
            if (hash[ch] < 0){
                return false;
            }
        }
        return true;

    }
};