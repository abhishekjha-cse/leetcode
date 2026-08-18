class Solution {
public:
    int scoreOfString(string s) {
               int sum =0; int n = s.length();
        char last = s[n-1];
        for(int i=0;i<s.length()-1;i++){
            int curr = s[i]-'a';
            int next = s[i+1]-'a';
            sum+= abs(curr - next);
        }
        return sum;
    }
};