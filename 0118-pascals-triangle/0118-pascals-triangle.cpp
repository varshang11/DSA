class Solution {
public:
    // vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>> result;
    //     for(int i=0;i<numRows;i++){
    //         vector<int> row(i+1,1);
    //         for(int j=1;j<i;j++){
    //             row[j]=result[i-1][j-1]+result[i-1][j];
    //         }
    //         result.push_back(row);
    //     }
    //     return result;

    vector<int> getRow(int rowIndex) {               //0 based
        vector<int> ans;
        long long value=1;
        ans.push_back(value);

        for(int col=1;col<rowIndex;col++){
            value=value*(rowIndex-col)/col;
            ans.push_back(value);
        }
        return ans;
    }
    vector<vector<int>>generate(int numRows){
        vector<vector<int>>ans;
        for(int row=1;row<=numRows;row++)
            ans.push_back(getRow(row));
        return ans;
    }

};