class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size(); unordered_map<int, int> mp ; vector<int>ans; vector<pair<int , int> > v;

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
            v.push_back(x);
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
    return a.second > b.second;
});

        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};