class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long value=1;
        ans.push_back(value);

        for(int col=1;col<=rowIndex;col++){
            value=value*(rowIndex-col+1)/col;
            ans.push_back(value);
        }
        return ans;
    }
};