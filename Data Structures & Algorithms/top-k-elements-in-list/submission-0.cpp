class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp; //step1:frequency map
        for(int n:nums){
            mp[n]++;
        }
        //step2:create buckets
        vector<vector<int>>bucket(nums.size()+1);
        //step3:put numbers into buckets
        for(auto & it:mp){
            bucket[it.second].push_back(it.first);
        }
        //step4:traverse buckets from highest frequency
        vector<int>ans;
        for(int i=nums.size();i>=0;i--){
            for(int n:bucket[i]){
                ans.push_back(n);
                if (ans.size()==k)
                return ans;
            }
        }
        return ans;
        
    }
};
