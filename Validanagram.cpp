class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort the bothe the string(s,t) and compare at end
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
        
    }
};