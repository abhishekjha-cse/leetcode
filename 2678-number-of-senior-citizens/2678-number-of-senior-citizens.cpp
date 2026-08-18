class Solution {
public:
    int countSeniors(vector<string>& details) {
               int n = details.size(); vector<string>ans;
        for(int i=0;i<n;i++){
            string s= details[i].substr(11,2);
            ans.push_back(s);
        }
        int n2= ans.size();
        int count=0;
        for(int i=0;i<n2;i++){
            if(stoi(ans[i])>60){
                count++;
            }
        }
        return count;
    }
};