class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(); unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int curr = nums[i];
            if(mp.find(curr) != mp.end()){
                mp[curr]++;
            }
            else{
                mp[curr]=1;
            }
        }
        for(auto &x : mp){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};