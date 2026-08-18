class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
                int n = arr.size();
        vector<int>ans;
        for(int i=0;i<n-1 ;i++){
             int max = arr[i+1];
            for(int j =i+2; j<n;j++){
                if(arr[j]>max){
                    max = arr[j];
                }
            }
             ans.push_back(max);
        }
         ans.push_back(-1);
        return ans;
    }
};