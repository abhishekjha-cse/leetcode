class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            vector<int>ans;
      int n= nums.size();
      int j=1;
      while(j<3){
      for(int i=0;i<n;i++){
        ans.push_back(nums[i]);
      }
      j++;
      }
      return ans;
    }
};