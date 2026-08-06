class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int rows=matrix.size();
        // int cols=matrix[0].size();
        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++){
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        // return false;        

        // int rows=matrix.size();
        // int cols=matrix[0].size();
        // for(int i=0;i<rows;i++){
        //     int low=0;
        //     int high=cols-1;
        //     while(low<=high){
        //         int mid=low+(high-low)/2;
        //         if(matrix[i][mid]==target)
        //             return true;
        //         else if(matrix[i][mid]<target)
        //             low=mid+1;
        //         else 
        //             high=mid-1;
        //     }
        // }
        // return false; 


        int rows=matrix.size();
        int cols=matrix[0].size();        
        int row=0;
        int col=cols-1;
        while(row<rows && col>=0){
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]>target)
                col--;
            else 
                row++;
        }
        return false;            
    }
};