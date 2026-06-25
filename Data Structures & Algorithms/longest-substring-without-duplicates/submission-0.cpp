class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>Charmap(256,-1);
        int left=0;
        int maxlen=0;
        for(int right=0;right<s.size();right++){
            char currentchar=s[right];
        
        if (Charmap[currentchar]>=left){
            left=Charmap[currentchar]+1;
        }
        Charmap[currentchar]=right;
        maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
        
        
    }
};
