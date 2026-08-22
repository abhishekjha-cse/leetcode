class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
              int n = nums.size(); unordered_map<int, int> mp;
        vector<int> ans;

        for(int i =0 ; i<n; i++){
            int curr = nums[i];

            if(mp.find(nums[i]) != mp.end()){
                mp[curr]++;
            }
            else{
                mp[curr]=1;
            }
        }
        for(auto &x : mp){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};